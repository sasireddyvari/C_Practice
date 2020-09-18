#include<stdio.h>
#include<math.h>
int main()
{
	int i,a=1,b=1,n;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
			//printf(" %d ",b);
			b=b*3;
		}
		else
		{
         //  	printf(" %d ",a);
			a=a*2;		  
		}
	}
   if(n%2==0)
   printf("%d",b);
   else
    printf("%d",a);

}