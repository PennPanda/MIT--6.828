/* Test the `vdupQ_laneu16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vdupQ_laneu16 (void)
{
  uint16x8_t out_uint16x8_t;
  uint16x4_t arg0_uint16x4_t;

  out_uint16x8_t = vdupq_lane_u16 (arg0_uint16x4_t, 1);
}

/* { dg-final { scan-assembler "vdup\.16\[ 	\]+\[qQ\]\[0-9\]+, \[dD\]\[0-9\]+\\\[\[0-9\]+\\\]!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
