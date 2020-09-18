#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i,j,n,count;
	a=1;
	b=1;
	
	int d=2;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("%d,%d,%d",a,d,b);
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
 					printf(",%d",d);
 				 }  
			}while(count!=0);
		}
		else
		{
			c=a+b;
			a=b;
			b=c;
			printf(",%d",c);
		}
 }
}