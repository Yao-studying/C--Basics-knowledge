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

// 1.printf:    返回值为打印的字符的个数,比如打印"89",返回值为2;打印"998",返回值为3;打印"996\n"返回值为4