#include<stdio.h>
void main()
{
	int arr[10],i,n;
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&
		arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d",i,arr[i]);
	}
}
