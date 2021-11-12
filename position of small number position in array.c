#include<stdio.h>
void main()
{
	int arr[10],i,n,small,position;
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(small>arr[i])
		{
			small=arr[i];
			position=i;
		}
	}

	 printf("%d\n%d",small,position);
}  
