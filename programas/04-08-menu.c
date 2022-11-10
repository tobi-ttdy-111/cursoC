
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
        printf( "\nIngrese el numero de la opcion deseada" );
        scanf( "%i", &opcion );

        switch ( opcion ) {
            case 1:
                printf( "\nEntonces voy a sumar" );
            break;
        };

    } while ( opcion != 5 );

    return 0;

};