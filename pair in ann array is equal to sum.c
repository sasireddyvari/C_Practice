#include<stdio.h>
main()
{
	int a[30],i,n,sum,j;
	printf("enter the no of elements in the array");
	scanf("%d",&n);
	printf("\nEnter the sum:");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
	  {
		if(a[i]+a[j]==sum)
		{
		printf("pair i.e is equal to sum is %d\t%d",a[i],a[j]);
		return;
        }
	  }
	  
	}
}