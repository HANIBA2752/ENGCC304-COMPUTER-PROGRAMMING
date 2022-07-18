#include <stdio.h>
int main() {
    int i, j    = 0 ;
    int N       = 7 ;
    char star   = '*' ;

    printf("--| Show 'Hello World' to Screen %d line(s)\n", N) ;
    for(i = 0 ; i < N ; i++) {
        printf( "[%3d] Hello World\n", i ) ;
    }
    
    N   = 8 ;
    i   = 0 ;
    printf("\n");

    while(i < N){
        j = 0;
        while(j < N){
            if(i < j){
                printf("%c", star) ; 
            }
            j++;
        }

        printf("%s", "\n") ;
        i += 1 ;
    }

    return 0 ;
}
