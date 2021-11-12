#include<stdio.h>
void main()
{
	int arr[10],i,n,f;
	printf("enter the numbers");
	scanf("%d",&n);
	printf("enter the compared number");
	scanf("%d",&f);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(f==arr[i])
		{
			printf("found\t");
		}
		else
		{
			printf("notfound\t");
		}
	}
}
	
