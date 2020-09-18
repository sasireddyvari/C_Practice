#include<stdio.h>
int ips(int n);
main()
{
 int n;
 printf("enter the number:");
 scanf("%d",&n);
 printf("%d",ips(n));
}
int ips(int n)
{
	int s;
	s=sqrt(n);
	return(s*s==n);
}