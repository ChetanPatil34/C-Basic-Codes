#include<stdio.h>
int main()
{
	int age;
	char gender;
	
	printf("\nEnter your gender(m-male,f-female):");
	scanf("%c",&gender);
	
	printf("\nEnter your age:");
	scanf("%d",&age);
	
	if(age>=18 && gender=='m')
	{
		printf("\nYou allow to draving");
	}
	else
	{
		printf("\nYou not allow to draving");
	}
	
	
	
	return 0;
}
