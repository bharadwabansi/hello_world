#include<stdio.h>
main()
{
	//get n numbers ,swap using loop
	//if x>x+1 swap
	int list[30];
	int i,j,temp,num_em;
	printf("enter the number of element in list");
	scanf("%d",&num_em);

	printf("enter %d elements",num_em);
	for(i=0;i<num_em;i++)
	{
		scanf("%d",&list[i]);
	}
	
	for(i=0;i<(num_em-1);i++)
	{
		for(j=0;j<(num_em-i-1);j++)
		{
			if(list[j]>list[j+1])
			{
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
			}
		}
	}
	
	printf("sorted list \n");
	for(i=0;i<num_em;i++)
	{
		printf("%d ",list[i]);
	}
}
