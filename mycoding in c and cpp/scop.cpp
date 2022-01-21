#include<stdio.h>
int top=-4;
void fun1();
void  fun2();
int main()
{
    fun1();
    fun2();
    return 0;
}
void fun1()
{
    top=15;
    printf("\n top in fun1 = %d ",top);
}

void fun2()
{
    printf("\n top in fun2 = %d ",top);
}
