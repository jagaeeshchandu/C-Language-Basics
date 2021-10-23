#include<stdio.h>
main()
{
	int i,n;
	printf("enter the factorial number");
	scanf("%d",&n);
	scanf("%d",&i);
	for(i;i<=n;i++)
{  
	if(n%i==0)
 printf("\nthe factorial of number is%d\n",i);
}
}
