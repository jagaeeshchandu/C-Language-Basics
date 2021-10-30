#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);//10,20
	fibnachi(a,b,c);
}

fibnachi(int a,int b,int c)
{
	int sum=0,i=1;
	printf("%d\t%d\t",a,b);
	while(i<=c)
	{
		sum=a+b;
         a=b;
		b=sum;
	printf("%d\t",sum);
	i++;
    }  
}
