#include <stdio.h>
void myprint(int x[3][4])
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            printf("%2d ",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int d[3][4]; ///global �ܼơA�|�ܦ�0
int globalInt; ///global �ܼơA�|�ܦ�0
int main()
{
    int a[3][4]; ///�}�C�ŧi�S���ȷ|�O�ýX
    int b[3][4] = {1,2,3};
    int c[3][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12} };
    myprint(a);
    myprint(b);
    myprint(c);
    myprint(d);
    int localInt; ///local �ܼơA�|�O�ýX
    printf("globalInt: %d localInt: %d\n",globalInt,localInt);
}
