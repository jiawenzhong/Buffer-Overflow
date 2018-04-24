// v u l n . c
#include <stdio.h>
#include <string.h>
int main ( int argc , char ∗∗ argv ) {

    // Make some s t a c k i n f o r m a t i o n
    char a [ 100 ] , b [ 100 ] , c [ 100 ] , d [ 100 ] ;

    // C a l l t h e e x p l o i t a b l e f u n c t i o n

    exploitable(argv[1]);

    // Return e v e r y t h i n g i s OK
    return ( 0 ) ; 
}

int exploitable(char ∗ arg) {

    // Make some s t a c k s p a c e
    char buffer[10];

    // Now copy t h e b u f f e r
    strcpy ( buffer , arg );
    printf("The buffersays. . [%s/%p ] .\n" , buffer, &buffer);

    // Return e v e r y t h i n g fun
    return ( 0 ); 
}