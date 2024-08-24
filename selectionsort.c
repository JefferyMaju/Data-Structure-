#include <stdio.h>
void main()
{
	int i,j,n,small,temp=0,t=0;
	t+2;
	printf("enter array size: ");
	scanf("%d",&n);
	t+2;
	int a[n];
	printf("enter array elements:\n");
	t+2;
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
		t+2;
	}
	t++;
	for(i=0;i<n;i++) {
		t++;
		small=i;
		t+2;
		for(j=i+1;j<n;j++) {
			t+2;
			if(a[small]>a[j])
			{
				small=j;
				t++;
			}
		}
		t++;
		if(i!=small)
		{
			temp=a[i];
			a[i]=a[small];
			a[small]=temp;
			t+3;
		}
	}
	printf("sorted array:\n");
	t++;
	for(i=0;i<n;i++) {
		printf("%d\t",a[i]);
		t+2;
	}
	printf("\n");
	t++;
	t+2;
	printf("\n time complexity =%d\n",t);
	printf("\n space complexity =%d\n",(24+(n*4)));
}
