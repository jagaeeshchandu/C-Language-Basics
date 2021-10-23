#include<stdio.h>
main()
{
	int i,n,fact=1;
	printf("enter the factorial number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{  
	fact=fact*i;
 printf("the factorial number is%d\n",fact);
}
}
