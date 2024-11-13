// 自动变量
// auto 局部变量都默认定义类型的前面有auto

// 循环
// for while do while break continue 

// 条件
// if switch case break default 


// 类型
// signed   unsigned  const  char short int long float double

// 结构类型
// enum  struct  union   

// 声明,修饰函数或变量
// extern  (声明外部符号)
// register 
// static (修饰局部变量,全局变量,函数;可以让局部变量不销毁,继续对他进行操作运算)
// typedef 

// 跳转
// goto

// 寄存器
// register

// 函数
// void return main volatile(操作系统里面去讲)

// 操作符
// sizeof

#include<stdio.h>

void test1 ()
{
    static int a = 1;
    a++;
    printf("%d", a);
}

int main()
{
    int i = 0;
    while(i<10)
    {
        test1();
        i++;
    }
}