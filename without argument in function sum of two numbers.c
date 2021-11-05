#include<stdio.h>
void main()
{
	int res=0;
	res=add();
	printf("%d",res);
}
int add()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
