#include<stdio.h>
int main()
{
  int marathi,english,math,science,biogy,total=0;
  float par=0.0; 
     
  printf("Enter the Student Marks"); 
  printf("\nMarathi marks=");
  scanf("%d",&marathi);
  
  printf("\nEnglish marks=");
  scanf("%d",&english);	
  
   printf("\nMath marks=");
   scanf("%d",&math);
   
    printf("\nScience marks=");
    scanf("%d",&science);	
  	
  	printf("\nBiogy marks=");
  	scanf("%d",&biogy);
  	
  	total=marathi+english+math+science+biogy;  
  	
  	printf("\ntotal=%d",total);
  	
  	par=(float)total/5;
  	
  	printf("\nParsantag=%f",par);
  	
  	if(par>=35)
	{
		printf("\nStudent is pass");
	}
	else
	
	{
		printf("\nStudent is fail");
	}
	return 0;
	
	
}
