#include "meas_app.h"
#include "data_struct.h"
#include "cmsis_os.h"
#include "main.h"

extern osMessageQueueId_t MsgQueue;
volatile MeasState_t meas_state;
volatile ObjectState_t obj_state;

//#define left_sensor HAL_GPIO_ReadPin(
//#define right_sensor 0
int left_sensor()
{
  int rez = HAL_GPIO_ReadPin(LEFT_SENSOR_IN_GPIO_Port, LEFT_SENSOR_IN_Pin) == GPIO_PIN_SET ? 1 : 0;
  return rez;
}

int right_sensor()
{
  int rez = HAL_GPIO_ReadPin(RIGHT_SENSOR_IN_GPIO_Port, RIGHT_SENSOR_IN_Pin) == GPIO_PIN_SET ? 1 : 0;
  return rez;
}

void Meas_Process()
{
  
  float cnt = 0.001f;
  uint32_t start_time = 0;
  uint32_t end_time = 0;
  DataStruct_t msg;
  
  while(1)
  {
    if (meas_state)
    {
      switch(obj_state)
      {
      case IDLE:
        if(left_sensor()) obj_state = STAT_LEFT; 
        if(right_sensor()) obj_state = STAT_RIGHT;
        break;
      case STAT_LEFT:
        if(left_sensor()) obj_state = STAT_LEFT; 
        if(right_sensor()) obj_state = STAT_RIGHT;
        if(!left_sensor() && !right_sensor()) 
        {
          obj_state = MOVE_RIGHT;
          start_time = HAL_GetTick();
        }
        break;
      case STAT_RIGHT:
        if(left_sensor()) obj_state = STAT_LEFT; 
        if(right_sensor()) obj_state = STAT_RIGHT;
        if(!left_sensor() && !right_sensor()) 
        {
          obj_state = MOVE_LEFT;
          start_time = HAL_GetTick();
        }
        break;
      case MOVE_LEFT:
        if(left_sensor()) 
        {
          obj_state = STAT_LEFT; 
          msg.dir = 0;   
          end_time = HAL_GetTick();
          msg.measure = (float)(end_time - start_time) / 1000.0f;
          osMessageQueuePut(MsgQueue, &msg, 0, 100);
        }
        break;
      case MOVE_RIGHT:        
        if(right_sensor()) 
        {
          obj_state = STAT_RIGHT; 
          msg.dir = 1;   
          end_time = HAL_GetTick();
          msg.measure = (float)(end_time - start_time) / 1000.0f;
          osMessageQueuePut(MsgQueue, &msg, 0, 100);
        }
        break;
      default:
        break;
      }
    }
    else
    {
      obj_state = IDLE;
    }
    HAL_Delay(1);
  }
}

