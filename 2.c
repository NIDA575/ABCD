#include<stdio.h>
int main()
{
	int arr[6]={4,2,6,0,5,10},i=0,j=0;
	while(arr[i])
	{
		j+=arr[i];
		i++;
	}
	printf("j=%d ",j);
	return 0;
}
