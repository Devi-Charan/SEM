//10
#include<stdio.h>
main()
{
	int n,d,s,m,z,x,e;
	scanf("%d",&n);
	x=n;
	if(n>0)
	{
		d=n%10;
		e=n/10;
		s=e+d;
		m=e*d;
	}
	z=s+m;
	if(z==x)
	{
		printf("Special 2-digit number");
	}
	else
	{
		printf("Not a Special 2-digit number");
	}
}
