#include<stdio.h>
int main()
{
	int m,p,c,e,h;
	printf("Enter the marks:\n");
	scanf("%d%d%d%d%d",&m,&p,&c,&e,&h);
	int totalmarks = m+p+c+e+h;
	float percentage = totalmarks/5;
	printf("%f",percentage);
	if(percentage>60){
		printf("First Division");
	}
	else if(percentage>50 && percentage<60){
		printf("Second Division");
	}
	else if(percentage<50){
		printf("Third Division");
	}
	
	return 0;
}