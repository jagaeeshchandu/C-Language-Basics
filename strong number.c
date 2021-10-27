#include<stdio.h>
main()
{
	int i,n,r,sum=0,fact,temp;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		i=1;
		fact=1;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("strong");
	}
	else
	{
		printf("not strong");
	}
}
