#include<stdio.h>
int main()
{
	int i,n,fact=1;
	
	printf("\nEnter the number");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--)
	{
	 fact=fact*i;
    }
	printf("\nfactorial of %d is %d",n,fact);
	
	return 0;
}
