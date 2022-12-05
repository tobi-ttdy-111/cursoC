
// includes
#include <stdio.h>


// main
int main() {

    for ( int i = 0; i < 10; i++ ) {
        printf( "1 x %i = %i\n", i, 1 * i );
    };

    int i = 0;
    while ( i < 10 ) {
        printf( "1 x %i = %i\n", i, 1 * i );
        i ++;
    };

    return 0;

};