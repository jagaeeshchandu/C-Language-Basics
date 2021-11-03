#include<stdio.h>
void main()
{
	int n,f,rev;
	printf("enter the number");
	scanf("%d",&n);
	f=factorcount(n);
	if(f==2)
	{
		printf("prime");
  }
	else
	{
		printf("not prime");
	}
	rev=reverse(n);
	f=factorcount(rev);
	if(f==2)
	{
		printf("circular prime");
	}
	else
	{
		printf("not circular prime");
	}
}
int factorcount(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+1;
		}
	}
	return sum;
}
int reverse(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	return sum;
}
