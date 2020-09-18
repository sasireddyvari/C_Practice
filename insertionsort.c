#include<stdio.h>
#include<conio.h>
void insertionsort(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
	 key=a[i];
	 j=i-1;
	 while(j>=0 && a[j]>key)
	  {
	   a[j+1]=a[j];
	   j--; 	
      } 
	  a[j+1]=key;	
	}
}
main()
{
   int n,a[20],i;
   printf("Enter array size:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   insertionsort(a,n);
    printf("\nSorted array is :");
    for(i=0;i<n;i++)
     printf(" %d ",a[i]);
  getch();
}