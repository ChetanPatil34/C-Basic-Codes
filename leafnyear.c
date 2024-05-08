#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter your year:");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("It is leaf_year");
	}
	else
	{
		printf("It is not leaf_year");
	}
	return 0;
}
