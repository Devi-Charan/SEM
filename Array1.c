#include<stdio.h>
main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array Elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("Reverse Array Elements:\n");
	for(i=(n-1);i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
