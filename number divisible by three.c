#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("enter the number divisible by three");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{  
	if(i%3==0)
 printf("%d\n",i);
}
}
