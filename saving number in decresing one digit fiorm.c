#include<stdio.h>
main()
{
     int n, i=1;
     printf("enter the value of n:");
     scanf("%d",&n);
    for(i=10;i<n;i*=10);

    for (i=i/10; n>0; i/=10)
    {
        printf("%d\n",n);
         	  n%=i;
     }

    return 0;
}
