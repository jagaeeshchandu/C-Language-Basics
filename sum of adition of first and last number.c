#include<stdio.h>
main()
{
	int n,r,sum=0,first,last;
	printf("enter the number");
	scanf("%d",&n);
	last=n%10;
	while(n!=0)
	{
		first=n%10;
		n=n/10;
		sum=first+last;
    }
	{
		printf("%d",sum);
	}
}
