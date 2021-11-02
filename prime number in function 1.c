#include<stdio.h>
int prime(int);
main()
{
int n,a;
printf("enter the number");
scanf("%d",&n);
a=prime(n);
printf("%d",a);	
}
int prime(int n)
{
	int i,sum=0;
	for(i=1;1<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+1;
		}
	}
	if (sum==2)
{
printf("prime");
}
else
{
printf("not prime");
}
}


