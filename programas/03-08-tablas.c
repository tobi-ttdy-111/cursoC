
// includes
#include <stdio.h>


// main
int main() {

    printf( "Tabla de multiplicar con bucle FOR\n" );
    for ( int i = 0; i < 0; i++ ) {
        printf( "1 x %i = %i\n", i, 1 * i );
    };

    printf( "Tabla de multiplicar con bucle WHILE\n" );
    int i = 0;
    while ( i < 0 ) {
        printf( "1 x %i = %i\n", i, 1 * i );
        i ++;
    };

    printf( "Tabla de multiplicar con bucle DO WHILE\n" );
    int j = 0;
    do {
        printf( "1 x %i = %i\n", j, 1 * j );
        j++;
    } while ( j < 0 );

    return 0;

};