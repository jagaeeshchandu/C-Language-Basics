#include<stdio.h>
main()
{
	int a,b,sum;
	printf("enter the a value of a and b");
	scanf("%d%d",&a,&b);
	sum=sub(a,b);
	printf("%d",sum);
}
int sub (int a,int b)
{
int c;
c=a-b;
return c;
}

