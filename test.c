#include<stdio.h>

int main()
{
    double a;

    scanf("请输入华氏温度：%lf", &a);

    printf("摄氏温度为:%.2f", (a - 32) * 5.0/ 9);

    return 0;
}