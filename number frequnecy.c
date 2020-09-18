#include<stdio.h>
main()
{
 int n,c,temp,count=0;
 printf("enter the number:");
 scanf("%d",&n);
 printf("Enter the number to be checked:");
 scanf("%d",&c);
 while(n!=0)
 {
  temp=n%10;
  n/=10;
  if(temp==c)
  count++;	
 }
 printf("%d",count);
}