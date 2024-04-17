#include <stdio.h>
#include <string.h> ///字串的函式
int main()
{
    char line[100];
    printf("輸入一堆英文字母，不能有空格，最後跳行結束輸入\n");
    scanf("%s",line);

    int N = strlen(line);
    printf("字串長度是:%d\n",N);
    ///strcpy(a,"Hello");字串拷貝
    ///strcat(a,b);字串結合 右邊b 接到左邊a的後面
    ///strcmp(a,b);字串比較(逐字母比較，看誰大)
}
