#include <stdio.h>
int main(){
    int     a=9 ;
    float   b=13.1 ;
    char    c='M' ;

    printf( "Please enter value : " ) ;
    scanf( "%d %f %c", &a, &b, &c ) ;

    printf("%d %.2f %c", a, b, c ) ;

    return 0;
}//end function

