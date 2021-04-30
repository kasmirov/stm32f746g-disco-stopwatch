#ifndef DATA_TYPE
#define DATA_TYPE

#ifdef __cplusplus
 extern "C" {
#endif

#include  <stdint.h>
   
typedef struct DataStruct
{
  uint8_t dir;
  float measure;
}DataStruct_t;
  
typedef enum {
    IDLE,
    STAT_LEFT,
    STAT_RIGHT,
    MOVE_LEFT,
    MOVE_RIGHT
}ObjectState_t;
  
typedef enum{
    MEAS_OFF,
    MEAS_ON
}MeasState_t;  
    
#ifdef __cplusplus
}
#endif
  
#endif 
  