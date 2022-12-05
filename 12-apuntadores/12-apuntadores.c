
// includes
#include <stdio.h>


// main
void main() {

    int variable1 = 10;
    int variable2 = 15;
    printf( "\nDireccion de memoria variable1: %X", &variable1 );
    printf( "\nDireccion de memoria variable2: %X", &variable2 );

    int * apVariable1 = &variable1;
    printf( "\nDireccion de memoria apVariable1: %X", &apVariable1 );
    printf( "\nDireccion de memoria apVariable1: %X", apVariable1 );
    printf( "\nValor de: %i", * apVariable1 );

    * apVariable1 = 20;
    printf( "\nValor de: %i", * apVariable1 );
    printf( "\nValor de: %i", variable1 );



};