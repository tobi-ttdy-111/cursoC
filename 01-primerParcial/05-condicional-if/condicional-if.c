
// includes
#include <stdio.h>


// main
int main() {

    int edadPersona1 = 18;
    int edadPersona2 = 15;
    int edadPersona3 = 39;
    int edadPersona4 = 17;

    if ( edadPersona3 >= 18 && edadPersona3 < 40 ) {
        printf( "\nPuedes pasar al antro, porque tienes %i anos", edadPersona3 );
    } else if ( edadPersona3 >= 40 ) {
        printf( "\nNo puedes pasar al antro porque tienes %i años, osea estas muy viejo", edadPersona3 );
    };

    if ( edadPersona3 < 18 ) {
        printf( "\nNo puedes pasar al antro, porque tienes %i anos", edadPersona3 );
    };

    return 0;

};