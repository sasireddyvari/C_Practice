#include<stdio.h>
main()
{
  int n,i,a[10],sum,j;
  printf("Enter the elements in the array and sum:");
  scanf("%d\t%d",&n,&sum);
  for(i=0;i<n;i++)
  	scanf("%d",&a[i]);  
  for(i=0;i<n-1;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
	  if(a[i]+a[j]==sum)
	  {
	  printf("pair found at index %d & %d",i,j);  	
      return;
	  }
	}	
  }
}