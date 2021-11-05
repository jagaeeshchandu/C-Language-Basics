#include<stdio.h>
void main()
{
	int n,res=0;
	scanf("%d",&n);
	res=sum(n);
	printf("%d",res);
}
int sum(int n)
{
 if(n==0)
 {
 return 0;
 }
 else
 {
 	return n+sum(n-1);
 }
}
