#include <stdio.h>
int main()
{
	int k,ans;
	scanf("%d",&k);
	for (int n=1;n<k;n++)
	{
		int now = (1+n)*n/2;
		if (now>k)
		{
			ans= n;
			break;
		}
	}
	printf("%d",ans);
}