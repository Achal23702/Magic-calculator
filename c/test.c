// # include <stdio.h>
// int main( )
// {
// int a = 300, b, c ;
// if ( a >= 400 )
// b = 300 ;
// c = 200 ;
// printf ( "%d %d",b,c ) ;
// return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int randomnumber = rand()%100 +1;//generate a random no.(rand())between 1 to 100
    printf("%d\n",randomnumber);
    return 0;
}