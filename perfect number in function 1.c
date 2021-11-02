#include<stdio.h>
int perfect(int);
main()
{
 int n,a;
 printf("enter the number");
 scanf("%d",&n);
 a=perfect(n);
 printf("%d",a);
}
int perfect (int n)
{
int i,sum=0;
for(i=1;i<=0;i++)	
 {
	if(n%i==0)
{
	sum=sum+i;
}
}
if (sum==n)
{
	printf("perfect");
}
else
{
	printf("not perfect");
}
}

