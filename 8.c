//8
#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
	{
		printf("Month has 31 days");
	}
	else if(n==2)
	{
		printf("Month has 28/29 days");
	}
	else
	{
		printf("Month has 30 days");
	}
}
