///最大公因數 輾轉相除法

#include <stdio.h>
int gcd(int a,int b)
{
    if (a==0) return b;
    if (b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    printf("輸入兩個數字:");
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=gcd(a,b);
    printf("答案是:%d",ans);
}
