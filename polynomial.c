#include<stdio.h>


void main()
{	struct polynomial
	{
		int coef;
		int exp;
	}a[20];
	int n,i;
	printf("Enter the number of terms: \n");
	scanf("%d",&n);
	
	printf("!!Enter it in descending order!!\n");	
	for (i=0;i<n;i++)
	{
		printf("Enter the coefficient: ");
		scanf("%d",&a[i].coef);
		printf("Enter the exponential: ");
		scanf("%d",&a[i].exp);
	}
	
	printf("The polynomial is: ");
	for (i=0;i<n;i++)
	{
		if (a[i].exp == 0)
			printf("%d",a[i].coef);
		if (a[i].coef == 0)
			continue;
		if (a[i].coef == 1 && a[i].exp != 0)
			printf("(x^%d)",a[i].exp);
		if (a[i].coef != 1 && a[i].exp != 0)
			printf("(%dx^%d)",a[i].coef,a[i].exp);
		if (i<n-1)
			printf("+");
	}
	printf("\n");
}
			
