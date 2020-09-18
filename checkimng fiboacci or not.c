#include<stdio.h>
int ips(int n);
int isfibonacci(int n);
main()
{
 int n;
 printf("enter the number:");
 scanf("%d",&n);
 printf("%d\n",isfibonacci(n));
}
int ips(int n)
{
	int s;
	s=sqrt(n);
	return(s*s==n);
}
int isfibonacci(int n)
{
	return(ips(5*n*n-4) || ips(5*n*n+4));
}