#include<stdio.h>
void main()
{
	int res=0;
	res=factorcount();
	if(res==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
int factorcount()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum++;
		}
	}
	return sum;
}
