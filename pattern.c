#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t");
		for(j=1;j<=n;j++)
		{
	//		if(i==1||i==n||j==n/2+1)
	     if(i%4==1||j==1)
			printf("%c",003);
			else
			printf(" ");
		}
		printf("\n");
	}
}