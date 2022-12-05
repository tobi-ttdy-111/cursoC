#include <stdio.h>
#include <stdlib.h>
void main() {
    float calif1, calif2, cali3, primedio;
    for ( int i = 1; i <= 3; i++ ) {
        printf( "Calif 1 del alumno %i: ", i );
        scanf( "%f", &calif1 );
        printf( "Calif 2 del alumno %i: ", i );
        scanf( "%f", &calif2 );
        printf( "Calif 3 del alumno %i: ", i );
        scanf( "%f", &cali3 );
        primedio = ( calif1 + calif2 + cali3 ) / 3;
        printf( "El promedio es: %.1f\n", primedio );
    };
};