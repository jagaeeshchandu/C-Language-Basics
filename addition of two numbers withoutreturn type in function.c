#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);
}
add(int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);
}
