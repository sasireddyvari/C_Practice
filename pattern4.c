#include<stdio.h>
main()
{
  int i,j,n,k;
  printf("enter the value of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	k=i;
  	for(j=n;j>=i;j--)
  	printf("%d",k++);
  printf("\n");
   }
}