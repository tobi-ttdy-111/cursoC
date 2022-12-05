
// includes
#include <stdio.h>


// main
int main() {

    int opcion;
    do {

        printf( "\nBienvenido a mi calculadora" );
        printf( "\n1. Sumar" );
        printf( "\n2. Restar" );
        printf( "\n3. Multiplciar" );
        printf( "\n4. Dividir" );
        printf( "\n5. Salir" );
        printf( "\nIngrese el numero de la opcion deseada " );
        scanf( "%i", &opcion );

        int num1;
        printf( "\nIngrese el numero 1:  " );
        scanf( "%i", &num1 );
        int num2;
        printf( "Ingrese el numero 2:  " );
        scanf( "%i", &num2 );

        switch ( opcion ) {
            case 1:
                int suma = num1 + num2;
                printf( "La suma es: %i", suma );
            break;
            case 2:
                int resta = num1 - num2;
                printf( "La resta es: %i", resta );
            break;
            case 3:
                int multiplciacion = num1 * num2;
                printf( "La multiplciacion es: %i", multiplciacion );
            break;
            case 4:
                float num1Float = num1;
                float num2Float = num2;
                float division = num1 / num2;
                printf( "La division es: %.2f", division );
            break;
        };

    } while ( opcion != 5 );

    return 0;

};