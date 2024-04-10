///99乘法表vs畫星星
#include <stdio.h>
int main()
{
    printf("請輸入大小:");
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int space = i,star=n;///第i行,有i空格
        for (int k=1; k<=space; k++)
            printf(" ");

        for (int k=1; k<=star; k++)
            printf("*");

        printf("i:%d\n",i);
    }
}
