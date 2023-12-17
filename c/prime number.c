#include<stdio.h>
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int a=0;
	for(int i=2;i<=-1;i++)
	{
		if(n%i==0)
		{
			a=1;
			break;
		}
	}
	if(a==0)
	printf("the given no.is prime\n");
	//else if
	//printf("the given no.is composite\n");
	return 0;
}