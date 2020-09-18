#include<stdio.h>
main()
{
	int n,i,j,count=0;
	printf("enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 if(n%i==0)
	 count++;	
	}
	if(count==2)
	printf("the numebr is prime");
	else 
	printf("the number is composite");
	getch();
}