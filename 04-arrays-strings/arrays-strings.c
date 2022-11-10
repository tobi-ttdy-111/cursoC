
// includes
#include <stdio.h>


// main
int main() {

    int numero = 10;
    int arregloNum[ 3 ] = { 1, 2, 100 };
    // int arregloNum[ 3 ];
    // arregloNum[ 0 ] = 10;
    // arregloNum[ 1 ] = 2;
    // arregloNum[ 2 ] = 100;
    printf( "posicion 2 del arreglo: %i", arregloNum[ 2 ] );

    // Esto lo vemos el lunes xd
    char arregloStrings[][ 5 ] = { 'Arsenal', 'Bautizo', 'Comadreja', 'Consulta', 'Dinosaurio', 'Zapato'};
    printf( "posicion 0 del arreglo: %s", arregloStrings[ 0 ] );

    return 0;

};