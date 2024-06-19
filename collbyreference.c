#include<stdio.h>
void swap(int*x,int*y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int x=10;
	int y =11;
	
	printf("value is before swap:x=%d,y=%d",x,y);
	swap(&x,&y);
	printf("value is after swap:x=%d,y=%d",x,y);
	
}
