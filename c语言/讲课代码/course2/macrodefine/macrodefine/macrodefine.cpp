// macrodefine.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "macro.h"

double Round(float r)
{
	return 2 * PI * r;
}

int main()
{
	Month thisMonth = MonthMarth;
	unsigned int add;
	char a = 'a';
	char * pChar = NULL;
	char ** pPChar = &pChar;
	pChar = &a;

	* pChar = 'c';
	** pPChar = 'm';

	printf("%d\n", &a);
	printf("%d\n", pChar);
	printf("%d\n", &pChar);
	printf("%d\n", pPChar);
	printf("%c\n", * pChar);
	
#if 0

	printf("%d\n", sizeof(unsigned int));

	switch (thisMonth)
	{
	case MonthJanuary:
		printf("Play Game!\n");
		break;
	case MonthFerbuary:
		printf("Play Ball!\n");
		break;
	case MonthMarth:
		printf("Play Mobile!\n");
		break;
	default:
		printf("Work!\n");
		break;
	}

#endif
	getchar();
    return 0;
}

//函数指针，数组及数组指针，多维数组指针