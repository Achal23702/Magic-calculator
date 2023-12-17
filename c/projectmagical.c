#include<stdio.h>
#include<math.h>
int main()
{
	printf("***********Welcome to Magic calculator!**********");
	printf("\n\n");
	printf(" ****Choose the operation to be performed**** ");
	printf("\n\n");
	printf("press  key 1 for Adiition\n ");
	printf("  press  key 2 for Subtraction\n");
	printf("press  key 3 for Multiplication\n ");
	printf("  press  key 4 for Division\n");
	printf("press  key 5 for Remainder\n");
	printf("   press  key 6 for Power\n");
	printf("press  key 7 for squareroot\n");
	printf("   press  key 8 for factorial\n");
	printf("press  key 9 for square\n");
	printf("   press  key 10 for cube\n");
	printf("\n\n");
	float num1,num2,result;
	
	int  Remainder;
	int n;
	
	printf("Enter the number one=");
	scanf("%f",&num1);
	printf("Enter the number two=");
	scanf("%f",&num2);
	printf("press the key=");
	scanf("%d",&n);
    int	a=num1;
    int	b=num2;
	printf("\n\n");
	
	switch(n)
	{
		case 1:   result = num1+num2;
		printf(" Your answer is:%f",result);
		printf("\n\n*****ThankYou*****\n\n");
		break;
			
		case 2: result = num1-num2;
		printf(" Your answer is:%f",result);
		printf("\n\n*****ThankYou*****\n\n");
		break;
			
		case 3: result = num1*num2;
		printf(" Your answer is:%f",result);
		printf("\n\n*****ThankYou*****\n\n");
		break;
			
		case 4: result = num1/num2;
		printf(" Your answer is :%f",result);
		printf("\n\n*****ThankYou*****\n\n");
		break;
			
		case 5: Remainder = a % b;
		printf("Your answer is:%d",Remainder);
		printf("\n\n*****ThankYou*****\n\n");
		break;
		
		case 6:	result = pow(num1,num2);
		printf(" Your answer is:%f",result);
		printf("\n\n*****ThankYou*****\n\n");
		break;	
		case 7:	result = sqrt(num1);
		printf(" Your answer is:%f",result);
		printf("\nIt is the square root of %f",num1);
		printf("\n\n*****ThankYou*****\n\n");
		break;	
		case 8: {
			
				int fact=1;
				for(int i=1;i<=num1;i++)
				{
					fact=fact*i;
				}
			
		printf(" Your answer is:%d",fact);
		printf("\nIt is the factorial of %f",num1);
		printf("\n\n*****ThankYou*****\n\n");
		break;
				}
		case 9:	result = num1*num1;
		printf(" Your answer is:%f",result);
		printf("\nIt is the square of %f",num1);
		printf("\n\n*****ThankYou*****\n\n");
		break;
		case 10:	result = num1*num1*num1;
		printf(" Your answer is:%f",result);
		printf("\nIt is the cube of %f",num1);
		printf("\n\n*****ThankYou*****\n\n");
		break;		
		
		default:
		printf("SORRY! No operation is performed\n");
		printf("Please! choose right Key\n");
		printf("Please! Please try Again For Your Result");
		printf("\n\n*****ThankYou*****\n\n");
	}
	
	return 0;
}