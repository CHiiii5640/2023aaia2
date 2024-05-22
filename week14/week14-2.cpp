#include <stdio.h>
int main()
{
    char c;
    char s[100];
    printf("輸入一行字: ");
    gets(s);
    printf("你輸入了: %s\n",s);

    printf("輸入英文名字: ");
    scanf("%s",s);
    printf("你的英文名字是: ",s);

    printf("再輸入一次英文名字");
    scanf("%c",&c); ///獨到跳行
    printf("讀到了: %c",c);
}
