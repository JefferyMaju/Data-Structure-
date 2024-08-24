#include<stdio.h>
void main()
{
	int n,i,x,flag=0,count=0,t=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);

	int a[n];
	t++;
	for (i=0;i<n;i++)
	{
		t++;
		printf("Enter the element: ");
		scanf("%d",&a[i]);
	}
	
	t++;
	for (i=0;i<n;i++)
	{
		t++;
		printf("%d\t",a[i]);
	}
	printf("\n");
	
	printf("Enter the number to be searched: ");
	scanf("%d",&x);
	t++;
	for (i=0;i<n;i++)
	{
		t++;
		count++;
		t++;
		if (a[i]==x)
		{
			flag=1;
			break;
		}
	}
	
	t++;
	t++;
	if (flag==1)
		printf("Number %d found at location %d\n",x,count);
	else if (flag==0)
		printf("Number not found\n");
	printf("Space Complexity = %d\n",((5*4)+(n*4)));
	printf("Time Complexity = %d\n",(10+t));
}
