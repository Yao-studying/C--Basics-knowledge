#include<stdio.h>

enum Color
{
    //枚举常量，声明时并不开辟空间
    red,
    green,
    blue
};//注意这个分号在哪里

int main()
{
    int num = 10;
    enum Color a = green;

    a = blue;

    return 0;
}

//1.字面常量
//2.const 修饰的常变量（这个实际上是变量只不过用法和常量一样）
//3.#define 定义的标识符常量，是纯符号，相当于直接在代码中替换掉再去读代码
//4.枚举常量（见上面的例子）