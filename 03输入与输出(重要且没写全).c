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

// 1.printf:    ����ֵΪ��ӡ���ַ��ĸ���,�����ӡ"89",����ֵΪ2;��ӡ"998",����ֵΪ3;��ӡ"996\n"����ֵΪ4