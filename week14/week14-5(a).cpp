#include <stdio.h>
int main()
{
	int a,ans=0;
	while (1)
	{
		scanf("%d",&a);
		if (a == 0)
		{
			break;
		}
		else ans += 1;
	}
	printf("%d",ans);
}
