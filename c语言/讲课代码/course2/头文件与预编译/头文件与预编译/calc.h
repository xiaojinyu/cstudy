#ifndef _WUXI_CALC_H_
#define _WUXI_CALC_H_

#include "calc1.h"

#define CALC_DEBUG

#if(defined CALC_DEBUG)

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
int Ple(int a, int b);


int GetValue(void);

#else

//int Add1(int a, int b);
//int Sub1(int a, int b);
//int Mul1(int a, int b);
//int Ple1(int a, int b);

#endif



#endif // !_WUXI_CALC_H_


