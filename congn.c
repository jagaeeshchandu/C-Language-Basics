#include<stdio.h>
void main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	while (n>=1)
	{
		if (n%2==0)
		{
			n=n/2;
			printf("%d\t",n);
		}
		else
		{
	    	n=3*n+1;
			printf("%d\t",n);
		}
		if(n==1)
		break;
		
	}
	
}
