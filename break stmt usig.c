#include<stdio.h>
main()
{
	int i,n;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the starting range");
	scanf("%d",&i);
	for(i;i<=n;i++)
	{
		if(i==n)
		{
			printf("%d",i);
			break;
		}
	}
}
