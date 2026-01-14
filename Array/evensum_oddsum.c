#include<stdio.h>
int main()
{
	int arr[100],i,n,evensum=0,oddsum=0;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			evensum=evensum+arr[i];
		}
		else
		{
			oddsum=oddsum+arr[i];
		}
		printf("even sum=%d\n",evensum);
		printf("odd sum=%d\n",oddsum);
		return 0;
	}
}
	