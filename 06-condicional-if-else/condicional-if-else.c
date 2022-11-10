
// includes
#include <stdio.h>


// main
int main() {

    int persona = 10;
    if ( persona >= 18 && persona < 40 ) {
        printf( "Puedes pasar al antro" );
    } else {
        printf( "No puedes pasar al antro" );
    };

    return 0;

};


/*
Mi antro recibe unicamente a las personas que tengan >= 18, pero que no pasen de los 40 años
*/

// [ 18, 40 )