
// includes
#include <stdio.h>


// main
void main() {

    int variable1 = 10;
    int variable2 = 20;
    int * variableAp = &variable1;

    printf( "\nLa direccion de memoria de variable1 es: %X", &variable1 );
    printf( "\nLa direccion de memoria de variable2 es: %X", &variable2 );

    printf( "\nApuntador" );
    printf( "\nLa direccion de memoria de variableAp es: %X", &variableAp );
    printf( "\nLa direccion de memoria a la que apuinta variableAp es: %X", variableAp );
    printf( "\nEl valor de variableAp es: %i", * variableAp );

    * variableAp = 45;
    printf( "\nEl valor de variableAp es: %i", * variableAp );
    printf( "\nEl valor de variable1 es: %i", variable1 );

};