#include<stdio.h>
main()
{
   int i,j,n,k;
   printf("enter the value of n:");
   scanf("%d",&n);
   k=1;
   for(i=1;i<=n;i++)
   {
   	for(j=n;j>=i;j--)
   	 {
        printf(" %d",k++);
   	 }
     printf("\n");  
   }
}