#include<stdio.h>
void main()
{
	int  i,n,arr[100],position,element;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the array");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,arr[i]);
	}
	printf("enter the position");
	scanf("%d",&position);
	printf("enter the element");
	scanf("%d",&element);
	for(i=n-1;i>=position;i--)
	{
		arr[i+1]=arr[i];
		
	}
	arr[position]=element;
	n++;
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
