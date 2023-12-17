// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value of n=");
//     scanf("%d",&n);
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     printf("the factorial of %d is =%d",n,fact);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value of n=");
//     scanf("%d",&n);
//     switch(n)
//     {
//         case 1: printf("Sunday");
//                 break;
//         case 2: printf("Monday");
//                 break;
//         case 3: printf("Tuesday");
//                 break;
//         case 4: printf("Wednesday");
//                 break;
//         case 5: printf("Thursday");
//                 break;
//         case 6: printf("Friday");
//                 break;
//         case 7: printf("Saturday");
//                 break;
//         default: printf("Invalid Number");
//     }
//     return 0;
// }

// #include<stdio.h>
// void swap(int x,int y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
//     printf("After swaping\na=%d\nb=%d",x,y);
//     return;
// }
// int main()
// {
//     int a,b;
//     printf("Enter the value of a and b\n");
//     scanf("%d%d",&a,&b);
//     printf("a=%d\nb=%d\n",a,b);
//     swap(a,b);
//     return 0;
// }


// #include<stdio.h>
// void swap(int* x,int* y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
    
//     return ;
// }
// int main()
// {
//     int a,b;
//     printf("Enter the value of a and b\n");
//     scanf("%d%d",&a,&b);
//     printf("a=%d\nb=%d\n",a,b);
//     swap(&a,&b);
//     printf("After swaping\na=%d\nb=%d",a,b);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
   
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=4-i;j++)
//         {
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++)
//         {
//             printf("* ");
//         }
        
//         printf("\n");
//     }
//     return 0;
// }