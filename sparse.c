#include <stdio.h>
void main()
{
	int m=1,i,j,r,c;
	printf("Enter the no. of rows: ");
	scanf("%d",&r);
	printf("Enter the no.of columns: ");
	scanf("%d",&c);
	int a[20][20],b[20][20];
	printf("Enter the matrix elements:\n");
	for (i=0;i<r;i++)
	{
		printf("For row %d\n",i);
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Row \t Column \t Value \n");
	b[0][0]=i;
	b[0][1]=j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if (a[i][j]!=0)
			{
				b[m][0]=i;
				b[m][1]=j;
				b[m][2]=a[i][j];
				m++;
			}
		}
	}
	b[0][2]=m-1;
	for (i=0;i<m;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
