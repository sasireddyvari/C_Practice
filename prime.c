#include<stdio.h>
main()
{
	int i,n,k,c,flag=0;
	printf("Enter the number upto which  the  prime Numbers are to be displayed: ");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
    {
 	  if(n%i==0)
	   {
	   flag=1;
	   break;
       }
    }
 	  if(flag==0)
 	  printf("prime");
 	  else
 	  printf("ot");
	getch();
}