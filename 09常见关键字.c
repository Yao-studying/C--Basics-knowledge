// �Զ�����
// auto �ֲ�������Ĭ�϶������͵�ǰ����auto

// ѭ��
// for while do while break continue 

// ����
// if switch case break default 


// ����
// signed   unsigned  const  char short int long float double

// �ṹ����
// enum  struct  union   

// ����,���κ��������
// extern  (�����ⲿ����)
// register 
// static (���ξֲ�����,ȫ�ֱ���,����;�����þֲ�����������,�����������в�������)
// typedef 

// ��ת
// goto

// �Ĵ���
// register

// ����
// void return main volatile(����ϵͳ����ȥ��)

// ������
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