#include<stdio.h>
#include<conio.h>
#include<time.h>
main()
{
    struct tm *local,*gm;
	time_t t;
	t=time(NULL);
//	local=localtime(&t);
//	printf("time----->%d:%d:%d",local->tm_hour,local->tm_min,local->tm_sec);
    puts(ctime(&t));
    puts(asctime(localtime(&t)));
}