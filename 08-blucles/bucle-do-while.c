
// includes
#include <stdio.h>


// main
int main() {

    // for ( int i = 0; i < 10; i++ ) {
    //     printf( "1 x %i = %i\n", i, 1 * i );
    // };

    // int i = 0;
    // while ( i < 10 ) {
    //     printf( "1 x %i = %i\n", i, 1 * i );
    //     i ++;
    // };

    int i = 0;
    do {
        printf( "1 x %i = %i\n", i, 1 * i );
        i++;
    } while ( i < 10 );

    return 0;

};