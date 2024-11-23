/*
 * File: main.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 10-Nov-2023 11:25:11
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include Files */
#include "main.h"
#include "math.h"
#include "fft2.h"
#include "fft2_terminate.h"
#include <stdio.h>

void main_fft2(void);
/* Function Definitions */
/*
 * Arguments    : int argc
 *                char **argv
 * Return Type  : int
 */
int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  /* The initialize function is being called automatically from your entry-point
   * function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
You can call entry-point functions multiple times. */
  main_fft2();
  /* Terminate the application.
You do not need to do this more than one time. */
  fft2_terminate();
  printf("success \r\n");
  return 0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void main_fft2(void)
{
  creal_T y[1024];
  double n1[1024];
  double N;
  double fs;
  /* Call the entry-point 'fft2'. */
  fft2(y, &fs, n1, &N);
//打印fft中的y
  // for(int i=0;i<1024;i++)
  // {
  //   printf("y.re:%f,y.im:%fi\r\n",y[i].re,y[i].im);
  // }
  //y的复数取模的函数
  float y_abs[1024];
  for(int i=0;i<1024;i++)
  {
    y_abs[i]=sqrt(y[i].re*y[i].re+y[i].im*y[i].im);
    printf("y_abs:%f\r\n",y_abs[i]);
  }
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
