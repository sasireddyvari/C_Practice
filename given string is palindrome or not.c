#include<stdio.h>
main()
{
	int i,length,n;
	char temp;
	char a[30],b[30];
	printf("Enter the string:");
	gets(a);
	for(i=0;i<30;i++)
	b[i]=a[i];
	length=strlen(a)-1;
	//scanf("%c",&a[30]);
	for(i=0;i<=length/2;i++)
	{
		temp=a[length-i];
		a[length-i]=a[i];
		a[i]=temp;
	}
	for(i=0;i<30;i++)
	{
    if(a[i]==b[i])
	{
	printf("the string is palindrome\n humma lakalaka");
    break;
	}
    else 
    {
	printf("the string is not palindrome\n ayyooo");
    break;
	}
	}
	getch();
}