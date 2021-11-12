#include<stdio.h>
void main()
{
	int arr[10],i,n,big1,big2;
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	big1=arr[0];
	big2=arr[0];
	for(i=0;i<n;i++)
	{
	if(big1<arr[i])
	{
		big2=big1;
		big1=arr[i];
	}
	else if(big2<arr[i])
	{
		big2=arr[i];
	}
else
{
}
}
printf("%d",big2);
}
