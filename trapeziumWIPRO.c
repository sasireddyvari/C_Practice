#include<stdio.h>
void pattern(int n)
{
  int i,j,c=1,b=n*n+1,s,k;
 for(i=n;i>=1;i--)
 {
 	for(j=1;j<=n-i;j++)
 	printf(" ");
 	for(k=1;k<=i;k++)
	printf("%d*",c++);
	for(s=1;s<i;s++)
    printf("%d*",b++);
    printf("%d",b);
    b=b-2*(i-1);
    printf("\n");
 }
}
main()
{
 int n;
 printf("Enter the n:");
 scanf("%d",&n);
 pattern(n);
}