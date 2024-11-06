#include <stdio.h>

int main()
{
    //数据类型的所占存储空间大小
    printf("char的大小是%zu个字节,%d比特位\n", sizeof(char), 8 * sizeof(char));
    printf("short的大小是%zu个字节,%d比特位\n", sizeof(short), 8 * sizeof(short));
    printf("int的大小是%zu个字节,%d比特位\n", sizeof(int), 8 * sizeof(int));
    printf("long的大小是%zu个字节,%d比特位\n", sizeof(long), 8 * sizeof(long));
    printf("long long的大小是%zu个字节,%d比特位\n", sizeof(long long), 8 * sizeof(long long));
    printf("float的大小是%zu个字节,%zu比特位\n", sizeof(float), 8 * sizeof(float));
    printf("double的大小是%zu个字节,%d比特位\n", sizeof(double), 8 * sizeof(double));

    return 0;
}