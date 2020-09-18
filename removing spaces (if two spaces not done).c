#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i,j,k;
char s[100];
printf("enter text:");
gets(s);
for(i=0;s[i];i++)
{
	if(s[i]==' ')
	{
		for(j=i;s[j];j++)
	    s[j]=s[j+1];
	}//if for two spaces at a time is  given then another if loop hasto be written
}
puts(s);
getch();
}
