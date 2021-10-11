#include<stdio.h>
main()
{
	int a,b,c,d,e,t,per;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	t=a+b+c+d+e;
	per=t*100/500;
	printf("%f",per);
	if(per>90)
	{
		printf("grade a");
	}
	else if(per>=80 && per<=90)
	{
		printf("grade b");
		}
	else if(per>=70 && per<=80)
	{
		printf("grade c");
	}
	else
	{
		printf("fail");
	}
}
