#include<stdio.h>
void main()
{
	int arr[10],i,n,big,position;
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(big<arr[i])
		{
			big=arr[i];
			position=i;
		}
	}

	 printf("%d\n%d",big,position);
}  
