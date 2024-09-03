/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: demo_pulse_led.h
 *
 * Code generated for Simulink model 'demo_pulse_led'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
 * C/C++ source code generated on : Tue Sep  3 13:23:51 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_demo_pulse_led_h_
#define RTW_HEADER_demo_pulse_led_h_
#ifndef demo_pulse_led_COMMON_INCLUDES_
#define demo_pulse_led_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* demo_pulse_led_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T lastSin;                      /* '<Root>/Sine Wave' */
  real_T lastCos;                      /* '<Root>/Sine Wave' */
  int32_T systemEnable;                /* '<Root>/Sine Wave' */
} DW;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T WaitTime;                     /* '<Root>/WaitTime' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
  } Timing;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void demo_pulse_led_initialize(void);
extern void demo_pulse_led_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'demo_pulse_led'
 */
#endif                                 /* RTW_HEADER_demo_pulse_led_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
