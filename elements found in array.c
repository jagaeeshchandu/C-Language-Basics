#include<stdio.h>
void main()
{
	int  i,n,arr[100],j,f;
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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
	if(arr[i]==arr[j])
	{
		f=1;
			printf("%d",arr[i]);
	    break;
        }
    }
}
    	if(f==1)
    	{
    	 printf("found");	
		}
	else
	{
	printf("not found");
	}	
}
