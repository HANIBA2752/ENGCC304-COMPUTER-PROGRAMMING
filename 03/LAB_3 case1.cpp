#include <stdio.h>
int main(){
    int     a=5 ;
    float   b=12.23945 ;
    char    c='F' ;

    printf( "Please enter value : " ) ;
    scanf( "%d %f %c", &a, &b, &c ) ;

    printf("%d %.2f %c", a, b, c ) ;

    return 0;
}//end function

