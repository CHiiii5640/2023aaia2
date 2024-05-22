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

int d[3][4]; ///global 變數，會變成0
int globalInt; ///global 變數，會變成0
int main()
{
    int a[3][4]; ///陣列宣告沒給值會是亂碼
    int b[3][4] = {1,2,3};
    int c[3][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12} };
    myprint(a);
    myprint(b);
    myprint(c);
    myprint(d);
    int localInt; ///local 變數，會是亂碼
    printf("globalInt: %d localInt: %d\n",globalInt,localInt);
}
