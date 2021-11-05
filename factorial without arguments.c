#include<stdio.h>
void main()
{
	int res=0;
	res=factorial();
	printf("%d",res);
}
int factorial()
{
int i,n,fact=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	fact=fact*i;
}
return fact;
}
