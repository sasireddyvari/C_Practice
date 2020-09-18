#include<stdio.h>
void pattern(int n)
{
  int i,j,flag=0;
 for(i=1;i<=n;i++)
 {
 	if(i%2!=0)
 	{
	for(j=flag+1;j<=flag+i;j++)
	printf("%d",j);
	flag=j;
	}
 	else
 	{
	flag=flag+i-1;
	for(j=flag;j>=flag-i+1;j--)
	printf("%d",j);
	}
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