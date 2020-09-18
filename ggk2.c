#include <stdio.h>
#include <conio.h>
void main ( )
{
int a,b,c,d,i,n,count;
printf("\n Enter the numbers uptpo which  to print fibnocci prime number\t");
scanf("%d",&n);
a=0;
b=1;
count=2;
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
   printf(" prime number is %d\t",c);
   count++;
 }
}