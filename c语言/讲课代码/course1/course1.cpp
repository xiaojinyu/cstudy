// 基本数据类型.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string.h"

typedef struct
{
    unsigned int fatherAge;
    unsigned int MatherAge;
}Parent;

typedef struct
{
    int id;
    unsigned char name[10];
    unsigned score;
    unsigned char personAge;
    Parent parentAge;
}StudentInfo;

int g_WuxiPostCode;


void PrintHello(void);
int Add(int a, int b);

int main()
{
    int a = 1;
    StudentInfo xiaoMing,xiaoWang;
    StudentInfo twoClass[30];
    StudentInfo oneGrade[3][30];
    StudentInfo xueXiao[3][3][30];
    int temp;
    int result;

    temp = g_WuxiPostCode;

    xiaoMing.id = 1;
    xiaoMing.personAge = 13;

    xiaoWang.id = 1;
    xiaoWang.personAge = 13;
    xiaoWang.parentAge.fatherAge = 32;
    xiaoWang.parentAge.MatherAge = 30;

    PrintHello();

    result = Add(a,4);
    printf("result = %d\n", result);

    getchar();

    return 0;
}

void PrintHello(void)
{
    printf("hello world!\n");
    return;
}

int Add(int a, int b)
{
    a++;
    return a + b;
}