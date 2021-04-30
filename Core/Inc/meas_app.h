#ifndef __MEAS_APP_H
#define __MEAS_APP_H

#ifdef __cplusplus
extern "C" {
#endif

void Meas_Process();

int left_sensor();
int right_sensor();

#ifdef __cplusplus
}
#endif

#endif /* __MEAS_APP_H */