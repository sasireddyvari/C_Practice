#include<stdio.h>
main()
{
	int i,j,n,length;
	char s[20];
    gets(s);
    length=strlen(s);
    for(i=0;i<length;i++)
    {
    	strlwr(s);
    	if(!(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u' && s[i]>'a' && s[i] < 'z'))
  	   {
  		   s[i]=' ';
 	  }
    }
    puts(s);
	getch();
}
