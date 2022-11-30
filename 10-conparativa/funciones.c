
// includes
#include <stdio.h>
#include <stdlib.h>


// promedioAlumno
void promedioAlumno( int alumno ) {

    float calif1, calif2, cali3, primedio;
    printf( "Calif 1 del alumno %i: ", alumno );
    scanf( "%f", &calif1 );
    printf( "Calif 2 del alumno %i: ", alumno );
    scanf( "%f", &calif2 );
    printf( "Calif 3 del alumno %i: ", alumno );
    scanf( "%f", &cali3 );
    primedio = ( calif1 + calif2 + cali3 ) / 3;
    printf( "El promedio es: %.1f\n", primedio );

};


// main
void main() {

    promedioAlumno( 1 );
    promedioAlumno( 2 );
    promedioAlumno( 3 );

};