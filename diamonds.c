#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("enter the value of n");
	scanf("\n%d",&n);
	for(i=1;i<=n;i++)
	{
    	for(j=1;j<=n-i;j++)
			printf("  ");
			  for(k=1;k<=2*i-1;k++)
			  {
			  	 printf(" ");
  			    printf("%d",i);

			  }
     printf("\n");
	}
     for(i=n-1;i>=1;i--)
	{
    	for(j=1;j<=n-i;j++)
			printf("  ");
			  for(k=1;k<=2*i-1;k++)
			  {
			  	 printf(" ");
			    printf("%d",i);
			  }
     printf("\n");
	}
}