#include <stdio.h>
int main()
{
    char c;
    char s[100];
    printf("��J�@��r: ");
    gets(s);
    printf("�A��J�F: %s\n",s);

    printf("��J�^��W�r: ");
    scanf("%s",s);
    printf("�A���^��W�r�O: ",s);

    printf("�A��J�@���^��W�r");
    scanf("%c",&c); ///�W�����
    printf("Ū��F: %c",c);
}
