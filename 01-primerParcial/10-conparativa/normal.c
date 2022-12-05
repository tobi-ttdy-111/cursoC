
// includes
#include <stdio.h>
#include <stdlib.h>


// main
void main() {

    // alumno1
    float calif11, calif21, calif31, promedio1;
    printf( "Calif 1 del alumno 1: " );
    scanf( "%f", &calif11 );
    printf( "Calif 2 del alumno 1: " );
    scanf( "%f", &calif21 );
    printf( "Calif 3 del alumno 1: " );
    scanf( "%f", &calif31 );
    promedio1 = ( calif11 + calif21 + calif31 ) / 3;
    printf( "El promedio es: %.1f\n", promedio1 );

    // alumno2
    float calif12, calif22, calif32, promedio2;
    printf( "Calif 1 del alumno 2: " );
    scanf( "%f", &calif12 );
    printf( "Calif 2 del alumno 2: " );
    scanf( "%f", &calif22 );
    printf( "Calif 3 del alumno 2: " );
    scanf( "%f", &calif32 );
    promedio2 = ( calif12 + calif22 + calif32 ) / 3;
    printf( "El promedio2 es: %.1f\n", promedio2 );

    // alumno3
    float calif13, calif23, calif33, promedio3;
    printf( "Calif 1 del alumno 3: " );
    scanf( "%f", &calif13 );
    printf( "Calif 3 del alumno 3: " );
    scanf( "%f", &calif23 );
    printf( "Calif 3 del alumno 3: " );
    scanf( "%f", &calif33 );
    promedio3 = ( calif13 + calif33 + calif33 ) / 3;
    printf( "El promedio3 es: %.1f\n", promedio3 );

};