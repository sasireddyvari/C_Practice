#include<stdio.h>
main()
{
  int n,i,a[10],sum,j;
  printf("Enter the elements in the array :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  	scanf("%d",&a[i]);  
  for(i=0;i<n-1;i++)
  {
  	sum=0;
  	for(j=i+1;j<n;j++)
  	{
  		sum+=a[j];
	  if(sum==0)
	  printf("(%d,%d)",a[i],a[j]);  	
  	}
  }
} 