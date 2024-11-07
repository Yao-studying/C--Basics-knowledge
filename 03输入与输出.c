#include <stdio.h>

int a = 1;
int b = 2;

int main()
{

    // 输入          (经典错误！！scanf("请输入a,b的值%d %d", &a, &b);)
    printf("请输入a,b的值");
    scanf("%d %d", &a, &b);

    // 运算
    int sum = a + b;

    // 输出
    printf("a,b相加为%d", sum);

    return 0;
}