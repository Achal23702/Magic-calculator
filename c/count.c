#include<stdio.h>
int main(){
    int num;
    printf("Enter num=");
    scanf("%d",&num);
    int count=0;

    int val=0;
    int rev=0;
    while(num!=0)
    {
        val=num%10;
        num/=10;

        rev=rev*10 + val;
        count++;
    }
    printf("the reverse of the number is %d\n",rev);
    printf("%d",count);
    return 0;
}