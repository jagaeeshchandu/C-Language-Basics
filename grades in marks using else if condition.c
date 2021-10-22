#include<stdio.h>
main()
{
	int a,b,c,d,e,s,per;
	printf("enter the five subjects score");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	s=a+b+c+d+e;
	per=(s*100)/5;
	if(per<90)
	{
		printf("grade a");
	}
	else if(per<80&&per<90)
	{
		printf("grade b");
	}
	else
	{
		printf("fail");
	}
}
	
