#include<stdio.h>
main()
{
  int i,j,n,k;
  printf("enter the value of n:");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
  	k=i;
  	for(j=1;j<=n;j++)
  	printf("%d",k--);
  printf("\n");
   }
}