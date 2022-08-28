#include<stdio.h>
void selection_sort(int arr[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		j=i+1;
		for(j=i;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}
void get_value(int arr[],int n)
{
	int i;
	printf("enter values \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void put_value(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
}
main()
{
	int arr[8],n;
	printf("enter number of elements to be sorted");
	scanf("%d",&n);
	get_value(arr,n);
	put_value(arr,n);
	selection_sort(arr,n);
	printf("after sorting");
	put_value(arr,n);
}

