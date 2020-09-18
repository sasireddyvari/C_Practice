#include<stdio.h>
main()
{
	FILE *fp;
	char input[100];
	fp=fopen("love.txt","a");
	if(fp==NULL)
	 printf("unable  to open");
	 else{
 		gets(input);
 		fputs(input,fp);
 		//fprintf("%s\t %d",name ,age); if declared above name age and printed 
 		printf("data was wriiten successfully");
	 }
	 	 fclose(fp);
getch();
return 0;
}