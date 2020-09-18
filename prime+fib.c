#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i,j,n,count;
	a=1;
	b=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if(c%2==1|| c==2)
		{
			count=0;
			for(j=2;j<=sqrt(c);j++)
			{
			   if(c%j==0)
			   {
   				   count++;
   				   break;
   		    	}
			}
				 if(count==0)
				 {
 					printf("\t%d",c);
 				}  	
		}
	}
	return 0;
}