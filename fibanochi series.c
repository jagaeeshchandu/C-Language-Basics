#include<stdio.h>
main()
{
	int n1=0,n2=1,n3,num;
	printf("enter the number");
	scanf("%d",&num);
	printf("%d%d",n1,n2);
	while(n3<=num)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		print("%d",n3);
	}
}
		
	

