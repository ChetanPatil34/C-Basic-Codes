#include<stdio.h>
int main()
{
	int var;
	int *ptr;
	int **pptr;
	
	var=3000;
	ptr=&var;
	pptr=&ptr;
	
	printf("\nvalue of var:%d",var);
	printf("\nvalue of ptr:%d",*ptr);
	printf("\nvalue of pptr:%d",**pptr);
	
	return 0;
}
