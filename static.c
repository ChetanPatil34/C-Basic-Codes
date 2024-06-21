#include<stdio.h>
extern int x=32; 
int b=8;
int main()
{
      auto int a=28;
      extern int b;
      
      printf("value of the auto variable:%d",a);
      printf("\nvalue of the extern variable x and b:%d,%d",x,b);
      x=15;
      printf("\nthe value of modified extern variable x:%d",x);
	
	return 0;
	
}
