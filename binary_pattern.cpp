#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		if(i%2)
		{
		for(j=1;j<=i;j++)
		{
				printf("%d",j%2);
		}
	}
		else
			{
				for(j=1;j<=i;j++)
				{
				printf("%d",(j+1)%2);
		     	}
			}

		printf("\n");
	}
}
