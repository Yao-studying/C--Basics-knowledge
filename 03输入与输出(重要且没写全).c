#include <stdio.h>

int a = 1;
int b = 2;

int main()
{

    // ����          (������󣡣�scanf("������a,b��ֵ%d %d", &a, &b);)
    printf("������a,b��ֵ");
    scanf("%d %d", &a, &b);

    // ����
    int sum = a + b;

    // ���
    printf("a,b���Ϊ%d", sum);

    return 0;
}