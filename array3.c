#include<stdio.h>
main()
{
	int a[100],n,i,search_element,j=1;
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
	printf("Enter the element to be found: ");
	scanf("%d",&search_element);
	for(i=0;i<n;i++)
	{
		if(search_element==a[i])
		{
			printf("%d found at %d",a[i],j);
		}
		j++;
	}
}
	
