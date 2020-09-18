#include<stdio.h>
#include<conio.h>
int max(int a, int b)
{
	return (a > b)? a : b; 
}
int lcs(char *x,char *y,int m,int n)
{
	int c[m+1][n+1];
	int i,j;
		for(i=0;i<m;i++)
	c[i][0]=0;
	for(j=0;j<n;j++)
	c[0][j]=0;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
			c[i][j]=c[i-1][j-1]+1;
			else
			c[i][j]=max(c[i-1][j],c[i][j-1]);
		}
	}
	return c[m][n];
}
main()
{
	char x[30],y[30];
	int m,n;
    gets(x);
    gets(y);
	m=strlen(x);
	n=strlen(y);
	printf("\nThe length of LCS is %d",lcs(x,y,m,n));
}
