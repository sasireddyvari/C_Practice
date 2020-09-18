#include<stdio.h>
main()
{
	int i,j,n,k,l;
	n=5;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
			printf("*");
		for(k=2;k<=i;k++)
			printf(" ");
        for(k=2;k<=i;k++)
			printf(" ");
		for(j=n;j>=i;j--)
			printf("*");
		printf("\n");
	}
}/*
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
			printf("*");
		for(k=2;k<=i;k++)
			printf(" ");
        for(k=2;k<=i;k++)
			printf(" ");
		for(j=n;j>=i;j--)
			printf("*");
		printf("\n");
	}
	fflush(stdin);
}*/