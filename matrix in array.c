#include<stdio.h>
void main()
{
	int arr[10][10],i,j,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	
	}
	printf("\n");
}
   for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
		printf("%d",arr[i][j]);
	}
	printf("\n");
}
}

