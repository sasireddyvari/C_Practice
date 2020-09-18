#include<stdio.h>
main()
{
	int length,i,smallest,greatest;
	printf("enter the length of an array");
	scanf("%d",&length);
	int a[length];
	for(i=0;i<length;i++)
	{
		scanf("%d",&a[i]);
	}
	smallest=a[0];
	greatest=a[0];
	for(i=1;i<length;i++)
	{
	 if(a[i]>greatest)
	 {
	 	greatest=a[i];
	 
     }
	if(a[i]<smallest)
	 {
	 smallest=a[i];
	  }
	}
	printf("greatest is %d",greatest);
	 printf("smallest is %d ",smallest);
	
}