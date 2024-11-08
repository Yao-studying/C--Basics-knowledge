// 打印
/*
    %d-打印整型
    %c-打印字符
    %s-打印字符串
    %f-打印float类型
    %lf-打印double类型
    %zu-打印sizeof的返回值
*/

// 转义字符
/*
    \a  警告字符 蜂鸣
    \b  退格符
    \f  进纸符

    \n  换行
    \r  回车
    \t  水平制表符
    \v  垂直制表符

    \?  字符串内部问号
    \'  字符常量'
    \"  字符串内部双引号
    \\  字符串内部斜杠


    \ddd 八进制数
    \xdd 十六进制数

*/

// ASCII
/*
    '0'--48

    'A'--65
    'a'--97
*/
#include <stdio.h>
#include <string.h>

int main()
{
    printf("%c\r", '\'');
    printf("\n");
    printf("abcd\0efg");
    printf("\n");
    printf("abcd\\0efg");
    printf("\n");

    printf("%c\n", 48);
    printf("%c\n", 65);
    printf("%c\n", 97);
    printf("%c\n", 70);

    printf("\n");
    printf("%c\n", '\130');
    printf("%d\n", '\130');
    printf("A的八进制的ASCII值为%o,十进制的ASCII值为%d\n", 65, 'A');
    printf("Z的十六进制的ASCII值为%x,规定宽度至少为4的十六进制为%#06x,规定字母大写的十六进制为%X\n", 90, 'Z', '\132');
    printf("规定必须带0x标识且宽度至少为9(其中0x标识占两个宽度)且字母大写的十六进制为%#09X\n", 'Z');
    printf("规定必须带0x标识且宽度至少为1(其中0x标识占两个宽度)且字母大写的十六进制为%#01X\n", 'Z');

    printf("\n");
    printf("%zu\n", strlen("qwer t"));
    printf("%zu\n", strlen("qwert"));
    printf("%zu\n", strlen("c:\test\325\test.c"));
    printf("c:\test\628\test.c");
    printf("\a\n"); // 蜂鸣
    printf("c:\\test\\628\\te abcd\bst.c");

    return 0;
}