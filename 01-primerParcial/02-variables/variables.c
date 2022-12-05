
// includes
#include <stdio.h> // libreria
#define PI 3.1416 // constante


// variable global
// int numeroGlobal = 14;


// main
int main() {

    // variable local
    // int numeroLocal = 1;
    // float floatLocal = 3.121321323;

    // printf( "el numero global es: %i", numeroGlobal );
    // printf( "\nel numero local es: %i", numeroLocal );
    // printf( "El numero global es: %i\nEl numero local es: %i\nEl numero flotante local es: %.6f", numeroGlobal, numeroLocal, floatLocal);

    // int sumatoria = numeroGlobal / numeroLocal;
    // printf( "La multiplicacion de los numeros esos todos raros es = %i", sumatoria );

    int num1 = 1;
    int num2 = 2;

    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplciacion = num1 * num2;
    int division = num1 / num2;

    printf( "\nPrimer numero: %i", num1 );
    printf( "\nSegundo numero: %i", num2 );
    printf( "\nSuma: %i", suma );
    printf( "\nResta: %i", resta );
    printf( "\nMultiplicacion: %i", multiplciacion );
    printf( "\nDivision: %i", division );

    return 0;

};