
// includes
#include <stdio.h>


// main
int main() {

    // aqui leemos la longitud del arreglo
    int longitud;
    printf( "\nIngresa la longitud del arreglo: " );
    scanf( "%i", &longitud );

    // aqui creamos el arreglo
    float numeros[ longitud ];

    // aqui llenamos el arreglo dinamicamente
    for ( int i = 0; i < longitud; i++ ) {
        float numero;
        printf( "numeros[ %i ] = ", i );
        scanf( "%f", &numero );
        numeros[ i ] = numero;
    };

    float valorActual;
    float numeroMayor = 0;
    for ( int i = 0; i < longitud; i++ ) {
        valorActual = numeros[ i ];
        if ( valorActual > numeroMayor ) {
            numeroMayor = valorActual;
        };
    };

    printf( "Valor mayor es: %f", numeroMayor );

    // { 1, 3, 2, 6, 2, 9 }
    // valorActual = 9
    // numeroMayor = 9

    return 0;

};