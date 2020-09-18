#include<stdio.h>
int main()
{
	int i,j,ncr=1,n,r;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(r=0;r<=i;r++)
		{
			if(r==0||i==0)
			ncr=1;
			else
			{
				ncr=ncr*(i-r+1)/r;
			}
			printf("%4d", ncr);
		}
		printf("\n");
	}
	getch();
	return 0;
}