#include<stdio.h>
main()
{
	int i,j,count;
	char s[100],temp;
	gets(s);
	int x=0,y;
	for(i=0;s[i];i++)
	{
			y=0;
		for(j=i+1;s[j];j++)
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
	printf("%c",temp);
}