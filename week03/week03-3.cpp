#include <stdio.h>
int main()
{
    int a=10;
    printf("%5d佔5格\n",a);
    float pi=3.1456489748967489428949;
    printf("%f 浮點數只有8格\n",pi);
    printf("%12f 印12，格對齊右邊\n",pi);
    printf("%12.10f 印12，點的右邊10格(不准)\n",pi);
    double pi2=3.1456489748967489428949;
    printf("%12.10f 兩倍浮點數double印點右邊10格",pi2);
}

