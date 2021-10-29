#include<stdio.h>
int main()
{
	int n,result;
	printf("enter the a value of ");
	scanf("%d",&n);
	result=factor(n);
	printf("%d",result);
}
int factor(int n)
{
	int i,sum=0;
 for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		printf("%d\n",i);
	sum=sum+1;
    }
}
return sum;
}



