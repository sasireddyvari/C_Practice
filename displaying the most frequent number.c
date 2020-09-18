#include<stdio.h>
main()
{
	int i,j;
    int  s[100],temp;
    int n=5;
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
	int x=0,y;
	for(i=0;i<n;i++)
	{
			y=0;
		for(j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
			y++;
		}
		if(x<y)
		{
			x=y;
			temp=s[i];
		}
	}
	printf("%d",temp);
}