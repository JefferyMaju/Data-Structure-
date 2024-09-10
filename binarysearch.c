#include<stdio.h>
void main()
{
	int i,x,left=0,a[20],n,flag,right,mid,pos,space,time=0;
	printf("Enter the number of elements: ");
	time++;
	scanf("%d",&n);
	time++;
	printf("Enter array elements: ");
	time++;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		time++;
	}
	right=n-1;
	printf("Enter the search element: ");
	scanf("%d",&x);
	time+=3;
	while (left<=right)
	{
		mid = (left+right)/2;
		time++;
		if (x==a[mid])
		{
			flag=1;
			time++;
			pos = mid;
			time++;
			break;
		}
		else if (x>a[mid]) {
			left=mid+1;
			time++;
		}
		else {
			right = mid-1;
			time++;
		}
	}
	if (flag==1) {
		printf("%d is found at position %d\n",x,pos+1);
		time++;
	}
	else {
		printf("%d not found \n",x);
		time++;
	}
	space = 10*4+(n*4);
	time++;
	printf("\n Space complexity: %d\n",space);
	printf("Time complexity: %d\n",time);
}
