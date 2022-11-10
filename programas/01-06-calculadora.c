
// includes
#include <stdio.h>


// main
int main() {

    int operacion = 2;
    int numero1 = 10;
    int numero2 = 1;
    printf( "Bienvenido a mi calculadora basica\n" );
    printf( "1. Suma\n" );
    printf( "2. Resta\n" );
    printf( "3. Multiplicacion\n" );
    printf( "4. Division\n" );
    printf( "Ingrese el numero de la operacion que desee realizar: " );
    scanf( "%i", &operacion );

    if ( operacion == 1 ) {
        printf( "La suma es: %i", numero1 + numero2 );
    } else if ( operacion == 2 ) {
        printf( "La resta es: %i", numero1 - numero2 );
    } else if ( operacion == 3 ) {
        printf( "La multiplicacion es: %i", numero1 * numero2 );
    } else if ( operacion == 4 ) {
        printf( "La division es: %f", numero1 / numero2 );
    } else {
        printf( "El numero introducido no es valido" );
    };

    return 0;

};


/*


Bienvenido a mi calculadora basica
1. Suma
2. Resta
3. Multiplicacion
4. Division
Ingrese el numero de la operacion que desee realizar: 


*/