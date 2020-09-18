#include<stdio.h>
main()
{
	char ch;
	FILE *fp;
	fp=fopen("own source.c","r");
	if(fp==NULL)
	printf("unable to open");
	else
	{
		//while(ch!=EOF)
		while(!feof(fp))
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		fclose(fp);
	}
	getch();
}