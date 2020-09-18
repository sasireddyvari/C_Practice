#include<stdio.h>
main()
{
	int i,j,k;
	//for(i=5;i>=1;--i)
	printf("\n");
     for(i=1;i<=5;i++)
		{	
		//	printf("\t");
			//for(j=1;j<=n-i;j++)
	  for(j=i;j<=5;j++)
	  {
		printf(" ");
	  }
//	while(k<=2*i-1)
       for(k=1;k<=i;k++)
	  {
	  	printf(" ");
     	printf("*");
	   }
	printf("\n");
	}
}