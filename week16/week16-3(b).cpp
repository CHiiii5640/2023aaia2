#include <stdio.h>
int main()
{
	int n,b=0,c=1;
	scanf("%d",&n);
	while (n>0)
	{
		b = n % 10;
		printf("%d ",b*c);
		n /= 10;
		c *= 10;
	}
}