#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i,j,n,count;
	a=1;
	b=1;
	int d=2,p;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=4;i<=n;i++)
	{
		if(i%2==0)
		{
			do
			{
			d++;
			count=0;
			for(j=2;j<=sqrt(d);j++)
			{
			   if(d%j==0)
			   {
   				   count++;
			        break;
   		    	}
			}
				 if(count==0)
				 {
 				p=d;
 				 }  
			}while(count!=0);
		}
		else
		{
			c=a+b;
			a=b;
			b=c;
		}
   }
   if(n%2==0)
   printf("%d",p);
   else
    printf("%d",c);
}