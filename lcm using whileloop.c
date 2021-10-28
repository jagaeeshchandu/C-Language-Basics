#include<stdio.h>
main()
{
	int a,b,t=2,res=1;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	while(a!=1)// 23 86
	{
		if(a%t==0 && b%t==0)
		{

		a=a/t;
		b=b/t;
		res=res*t;//3,
	}
	else
   	{
		t++;
	}
	if(t>a ||t>b)
	{
		res=res*a*b;
	printf("%d",res);
	break;
}
}
}
