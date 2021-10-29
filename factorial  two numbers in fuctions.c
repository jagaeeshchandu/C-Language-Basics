#include<stdio.h>
int main()
{
	int n,result;
	printf("enter the a value of ");
	scanf("%d",&n);
	result=factorial(n);
	printf("%d",result);
}
int factorial(int n)
{
int i,fact=1;
for(i=1;1<=n;i++)
{
	fact=fact*i;
}
return fact;
}

