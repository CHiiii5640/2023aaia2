#include <stdio.h>
int main()
{
    char line[80];
    printf("��J�@��^��r:\n");
    gets(line);
    printf("�o��r�O:%s\n",line);

    printf("�A��J�@��^��r:\n");
    scanf("%s",line);
    printf("�o��r�O:%s\n",line);
}
