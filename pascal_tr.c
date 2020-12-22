#include<stdio.h>
#define max 10
int main()
{
	int a[max][max],i,j,n;
	printf("enter no.of rows for the triangle\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0 || (i==j))
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	printf("pascal triangle:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
}
