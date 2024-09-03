/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: demo_pulse_led.c
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

#include "demo_pulse_led.h"
#include <math.h>
#include "rtwtypes.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void demo_pulse_led_step(void)
{
  real_T lastSin_tmp;

  /* Sin: '<Root>/Sine Wave' */
  if (rtDW.systemEnable != 0) {
    lastSin_tmp = 0.1 * ((rtM->Timing.clockTick0) * 1.0);
    rtDW.lastSin = sin(lastSin_tmp);
    rtDW.lastCos = cos(lastSin_tmp);
    rtDW.systemEnable = 0;
  }

  /* Outport: '<Root>/WaitTime' incorporates:
   *  Gain: '<Root>/Gain'
   *  Sin: '<Root>/Sine Wave'
   */
  rtY.WaitTime = (((rtDW.lastSin * 0.99500416527802571 + rtDW.lastCos *
                    -0.099833416646828155) * 0.99500416527802571 + (rtDW.lastCos
    * 0.99500416527802571 - rtDW.lastSin * -0.099833416646828155) *
                   0.099833416646828155) * 0.2 + 0.25) * 1000.0;

  /* Update for Sin: '<Root>/Sine Wave' */
  lastSin_tmp = rtDW.lastSin;
  rtDW.lastSin = rtDW.lastSin * 0.99500416527802571 + rtDW.lastCos *
    0.099833416646828155;
  rtDW.lastCos = rtDW.lastCos * 0.99500416527802571 - lastSin_tmp *
    0.099833416646828155;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 1.0, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  rtM->Timing.clockTick0++;
}

/* Model initialize function */
void demo_pulse_led_initialize(void)
{
  /* Enable for Sin: '<Root>/Sine Wave' */
  rtDW.systemEnable = 1;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
