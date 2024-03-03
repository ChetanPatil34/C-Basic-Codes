#include<stdio.h>
int main()
{
	int a,b,c=0;
	
	printf("\nenter the 2 number:");
	scanf("%d %d",&a,&b);
	
	c=a+b;
	
	printf("\naddistion=%d",c);
	
	c=a-b;
	
	printf("\nSubtraction=%d",c);
	
	c=a*b;
	
	printf("\nMultiplication=%d",c);\
	
	c=a/b;
	
	printf("\nDividation=%d",c);
	
	return 0;
}
