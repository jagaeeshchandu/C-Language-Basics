#include<stdio.h>
int main()
{
	int a,b,c,result;
	printf("enter the a value of ");
	scanf("%d%d%d",&a,&b,&c);
	result=big(a,b,c);
	printf("%d",result);
}
int big (int a,int b,int c)
{
if(a>b && a>c)
{
return a;
}
if(b>a && b>c)
{
	return b;
}
else
{
	return c;
}
}

