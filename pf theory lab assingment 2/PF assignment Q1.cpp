#include <stdio.h>
int main()
{
		int num[5];
		int smol = 9999;
		int secondsmol=9999;
		for(int i=0;i<5;i++)
		{
			printf("enter a number\n");
			scanf("%d",&num[i]);
			if(num[i]>9999)
			{
				num[i]=0;
				printf("enter the numebr again\n");
				scanf("%d",&num[i]);
				printf("the element is:%d\n",num[i]);
			}
			
		}
		for(int j=0;j<5;j++)
		{
			if(num[j] < smol)
			{
				secondsmol = smol;
				smol = num[j];
			}
			else if(num[j]< secondsmol && num[j] != smol)
			{
				secondsmol = num[j];
			}
			
			
			
		}
		printf("the second smallest number is:%d",secondsmol);
		return 0;
		
		
	
} 