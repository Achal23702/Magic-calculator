#include<stdio.h>
int main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
    
        printf("\n");
    }
    for(int l=1;l<=n+1;l++){
        printf("*");
    }
    printf("\n");
    for(int i=1; i<=n;i++){
        for( int k=i;k<=n;k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}