#include <stdio.h>
int main()
{
    printf("��J10�^��r���A���঳�Ů�:\n");
    char line[30];
    scanf("%s",line);
    printf("�o�Ӧr�O:%s�̭����r�A���O�O:\n");

    for(int i=0; i<11; i++)
    {
        printf("��%d�Ӧr���O:%c�������Ʀr�O: %d\n",i,line[i],line[i]);
    }
}
