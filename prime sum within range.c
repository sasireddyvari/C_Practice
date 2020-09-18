#include<stdio.h>
main()
{
	int i,j,c,min,max,sum=0;
	printf("Enter the min and max number:");
	scanf("%d\t%d",&min,&max);
	for(i=min+1;i<max;i++)
	{
		for(j=1,c=0;j<=i;j++)
		{
			if(i%j==0)
			c++;
		}	
		if(c==2)
		{
			sum=sum+i;
		}
	}
	printf("%d\n",sum);   
	getch();
}