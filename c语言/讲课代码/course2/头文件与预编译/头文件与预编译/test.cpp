// 头文件与预编译.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"



#include "calc.h"
#include "calc1.h"

#if 1
void HelloWorld(void)
{
	printf("hello world!\n");
}
#endif


int main()
{
	int result = 0;

//	result = Sub(3, 2);

	printf("%d\n", GetValue());
	printf("%d\n", GetValue());
	printf("%d\n", GetValue());
	printf("%d\n", GetValue());

	HelloWorld();

	getchar();
    return 0;
}



