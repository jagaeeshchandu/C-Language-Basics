#include<stdio.h>
main()
{
int n,i,sum=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++);
  {
	if(n%i==0)
	sum=sum+1;
  }

   if(sum==2)
  printf("nuber is perfect");	
  	else
  	{
  	printf("numeber is not perfect");
  }
  
}
