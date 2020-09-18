#include<stdio.h>
int fib(int n)
{
	int i;
	if(n<=1)
	return 1;
	for(i=1;i<=n;i++)
	return(fib(n-1)+fib(n-2));
}
main()
{
	int i,n;
	printf("Enter the nt of fibonacci: ");
	scanf("%d",&n);
    printf("%d",fib(n-2));
}