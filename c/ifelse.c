#include<stdio.h>
int main()
{
    int n;
    printf("Enter no.");
    scanf("%d",&n);
    if(n>80){
        printf("A");
    }
    else if (n>60){
        printf("B");
    }
    else if (n>40){
        printf("C");
    }
    else
    printf("D");
    return 0;
}