#include<stdio.h>

int main()
{
    double a;

    scanf("�����뻪���¶ȣ�%lf", &a);

    printf("�����¶�Ϊ:%.2f", (a - 32) * 5.0/ 9);

    return 0;
}