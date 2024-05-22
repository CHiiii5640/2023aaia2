#include <stdio.h>
int main()
{
    int a=5;
    /// if (a>0) ///if判斷只做一次
    /// {
    ///     printf("a:%d\n",a);
    /// }
    /// while(a>0) ///一直做
    /// {
    ///         printf("a:%d\n",a);
    /// }
    /// while(1) printf("a:1\n");
    if(999) printf("999成立\n");
    if(3) printf("3成立\n");
    if(2) printf("2成立\n");
    if(1) printf("1成立\n");
    if(0) printf("請問0成立嗎?\n"); ///只有0不成立
    if(-1) printf("-1成立\n"); ///其他都成立
    if(-2) printf("-2成立\n");
    if(-3) printf("-3成立\n");
}
