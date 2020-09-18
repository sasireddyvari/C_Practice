#include<stdio.h>
main()
{
	char ch;
	FILE *fp;
	fp=fopen("love.txt","r");
	if(fp==NULL)
	printf("unable to open the file");
	else{
		while(!feof(fp))
		{
		ch=fgetc(fp);
		printf("%c",ch);
		}
	fclose(fp);
	}
}
