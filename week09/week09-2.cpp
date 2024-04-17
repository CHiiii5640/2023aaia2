#include <stdio.h>
int main()
{
    char line[80];
    printf("輸入一行英文字:\n");
    gets(line);
    printf("這行字是:%s\n",line);

    printf("再輸入一行英文字:\n");
    scanf("%s",line);
    printf("這行字是:%s\n",line);
}
