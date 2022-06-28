#include<stdlib.h>

int main()
{
    int a;
    //输出value整型
    a=system("calc");
    //将value赋值=system 并打开计算器
    printf("%d\n",a);
    //%d表示占位符输出一个整型
    return 0;
    //成功显示0 失败显示任意数字
}
