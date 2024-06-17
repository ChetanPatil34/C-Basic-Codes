#include<stdio.h>
int main()
{
   int n,i,fact=1;
   
   printf("\n Enter the No:-");
   scanf("%d",&n);
   
   for(i=n; i>=1; i--)
   {
   	 fact=fact*i;
   }
   printf("\nfactorial of %d is %d",n,fact);
	
	return 0;
}
