#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "data_struct.h"
#include "cmsis_os.h"

extern osMessageQueueId_t MsgQueue;
extern MeasState_t meas_state;
  
Model::Model() : modelListener(0)
{

}

void Model::tick()
{

#ifndef SIMULATOR      
      // Work code
      DataStruct_t msg;
      
      if (osMessageQueueGet(MsgQueue, &msg, NULL, 50U) == osOK)
      {
          modelListener->timeMeasureReceived(msg.dir, msg.measure);          
      }
#endif 
}

void Model::startMeasure()
{
  meas_state = MEAS_ON;
}

void Model::stopMeasure()
{
  meas_state = MEAS_OFF;
}

