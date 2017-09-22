#include "stdafx.h"
#include "calc.h"

//¼ÆËã³ÌĞò
#if(defined CALC_DEBUG)
int Add(int a, int b)
{
	int result = Good(a, b);
	return a + b;
}

static int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Ple(int a, int b)
{
	return a / b;
}

int GetValue(void)
{
	static int big = 10;
	big++;
	return big;
}

#endif