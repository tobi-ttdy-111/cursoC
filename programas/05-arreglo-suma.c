
// includes
#include <stdio.h>


// main
int main() {

    int longitudArreglo;
    printf( "\nIngrese el numero de datos que tendra tu arreglo: " );
    scanf( "%i", &longitudArreglo );

    int arregloNumeros[ longitudArreglo ];
    int valor;
    for ( int i = 0; i < longitudArreglo; i++ ) {
        printf( "Ingrese el valor del arreglo en la posicion [ %i ] : ", i );
        scanf( "%i", &valor );
        arregloNumeros[ i ] = valor;
    };

    int suma = 0;
    for ( int i = 0; i < longitudArreglo; i++ ) {
        suma += arregloNumeros[ i ];
        if ( ( i + 1 ) == longitudArreglo ) {
            printf( "%i ", arregloNumeros[ i ] );
        } else {
            printf( "%i + ", arregloNumeros[ i ] );
        };
    };
    printf( "= %i", suma );

    return 0;

};