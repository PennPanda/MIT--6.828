/* Test the `vmulQ_lanes32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vmulQ_lanes32 (void)
{
  int32x4_t out_int32x4_t;
  int32x4_t arg0_int32x4_t;
  int32x2_t arg1_int32x2_t;

  out_int32x4_t = vmulq_lane_s32 (arg0_int32x4_t, arg1_int32x2_t, 1);
}

/* { dg-final { scan-assembler "vmul\.i32\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, \[dD\]\[0-9\]+\\\[\[0-9\]+\\\]!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
