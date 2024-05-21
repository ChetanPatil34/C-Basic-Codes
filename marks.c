#include<stdio.h>
int main()
{
	int web,c,acounting,computer,total=0;
	
	printf("\nweb marks:");
	scanf("%d",&web);
	
    printf("\nc marks:");
    scanf("%d",&c);
    
    printf("\nacounting:");
    scanf("%d",&acounting);
    
    printf("\ncomputer:");
    scanf("%d",&computer);
    
    total=web+c+acounting+computer;
    
    printf("\naddistion=%d",total);
    
    return 0;
}
