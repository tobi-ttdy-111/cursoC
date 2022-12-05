
// includes
#include <stdio.h>
#include <stdlib.h>


// funcionSumar
int funcionSumar( int numero1, int numero2 ) {

    int suma = numero1 + numero2; // 33
    return suma;

};


// funcionRestar
int funcionRestar( int numero1, int numero2 ) {

    int resta = numero1 - numero2;
    return resta;

};


// funcionDivision
int funcionDivision( int numero1, int numero2 ) {

    int division = numero1 / numero2;
    return division;

};


// funcionMultiplicacion
int funcionMultiplicacion( int numero1, int numero2 ) {

    int multiplicacion = numero1 * numero2;
    return multiplicacion;

};


// main
void main() {

    int num1;
    int num2;
    printf( "Numero 1: " );
    scanf( "%i", &num1 );
    printf( "Numero 2: " );
    scanf( "%i", &num2 );
    system( "cls" );

    int opcion;
    do {

        printf( "\n1. sumar" );
        printf( "\n2. restar" );
        printf( "\n3. dividir" );
        printf( "\n4. multiplciar" );
        printf( "\n5. salir" );
        printf( "\nIngrese la opcion deseada: " );
        scanf( "%i", &opcion );
        system( "cls" );

        switch ( opcion ) {
            case 1:
                int suma = funcionSumar( num1, num2 );
                printf( "La suma es: %i", suma );
            break;
            case 2:
                int resta = funcionRestar( num1, num2 );
                printf( "La resta es: %i", resta );
            break;
            case 3:
                int division = funcionDivision( num1, num2 );
                printf( "La division es: %i", division );
            break;
            case 4:
                int multiplicacion = funcionMultiplicacion( num1, num2 );
                printf( "La multiplicacion es: %i", multiplicacion );
            break;
            case 5:
                printf( "\nAdios usuario !" );
            break;
        };

    } while ( opcion != 5 );

};


/*
    int / float / void
*/