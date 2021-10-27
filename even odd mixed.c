#include<stdio.h>
main()
{
int n,r,even=0,odd=0,dc=0;
scanf("%d",&n);
while(n!=0)
{
 r=n%10;
 if(r%2==0)
 {
 	even=even+1;
 }
 else
 {
 	odd=odd+1;
 }
 dc=dc+1;
 n=n/10;
}
if(dc==even)
{
	printf("even");
}
else if(dc==odd)
{
	printf("odd");
	
}
else
{
	printf("mixed");
}
}
	
