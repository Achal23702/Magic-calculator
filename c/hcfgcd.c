#include<stdio.h>
int min(int a, int b){
	if (a<b) return a;
	else return b;
} 
int gcd(int a,int b){
	int hcf;
	for(int i=1;i<=min(a,b);i++){
		hcf=1;
	}
	return hcf;
}

int main()
{
	int a,b;
	printf ("enter a:");
	scanf ("%d",&a);
	printf ("enter b:");
	scanf ("%d",&b);
	int hcf = gcd(a,b);
	printf("the hcf/gcd of %dand %d is:%d ",a,b,hcf);
	return 0;
}