#include<stdio.h>
main()
{
 int a[10][10];
 int i,n,j;
 printf("enter the value of n:");
 scanf("%d",&n);
 printf("Enter the values inn the matrix:\n"); 
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("The matrix is\n");
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	printf(" %d ",a[i][j]);
	printf("\n");
  }
  printf("The transpose of the matrix is\n");
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	printf(" %d ",a[j][i]);
  	printf("\n");
  }
  getch();
}