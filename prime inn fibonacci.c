#include<stdio.h>
main()
{
 int a=0,b=1,n,count=0,i,d=0,c;
 printf("enter the value of n:");
 scanf("%d",&n);
 count=2;
 printf("\n-----the prime numbers in fibonacci series are-----\n");
 while(count<n)
 {
 	c=a+b;
    a=b;
    b=c;
    for(i=1,d=0;i<=c;i++)
    {
    	if(c%i==0)
    	d++;
    }
    	if(d==2)
    	printf("%d\n",c);
    	else
    	count++;
  }
}
 /*
{
  int x=35,y=20;
  x=x++ + y++;
  y=++x + ++y;
  printf("%d %d",x,y);
}*/