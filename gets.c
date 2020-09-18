#include<stdio.h>
main()
/*{
	char i[20];
	char j[20];
	gets(i);
	puts(i);
}*/
{
	int i;
	char source[5];//="anil Shetty";
	char target[5];
	puts("enter the elements");
	gets(source);
//	scanf("%[^\n]",source);
//	strcpy(source,"this is sasi");
   	strcpy(target,source);
	printf("%s\t%s",source,target);
    getch();
}