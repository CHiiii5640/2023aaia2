#include <stdio.h>
int main()
{
    char c;
    char s[40];
    printf("輸入1個字母，在輸英文名字");
    scanf("%c%s", &c, s);
    printf("你的名字是:%s 你輸入的字母是:%c\n",s,c);
}
