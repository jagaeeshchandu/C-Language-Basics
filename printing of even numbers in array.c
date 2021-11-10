#include<stdio.h>
void main()
{
	int arr[1003
	],i,n;
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	 if(arr[i]%2==0)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
}

