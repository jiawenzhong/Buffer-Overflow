// v u l n . c
2 #include <s t d i o . h>
3 #include <s t r i n g . h>
4 int main ( int argc , char ∗∗ argv ) {
5
// Make some s t a c k i n f o r m a t i o n
6
char a [ 1 0 0 ] , b [ 1 0 0 ] , c [ 1 0 0 ] , d [ 1 0 0 ] ;
7
// C a l l t h e e x p l o i t a b l e f u n c t i o n
8
e x p l o i t a b l e ( argv [ 1 ] ) ;
9
// Return e v e r y t h i n g i s OK
10
return ( 0 ) ; }
11
12 int e x p l o i t a b l e ( char ∗ a r g ) {
13
// Make some s t a c k s p a c e
14
char b u f f e r [ 1 0 ] ;
15
// Now copy t h e b u f f e r
16
strcpy ( buffer , arg ) ;
17
p r i n t f ( "The b u f f e r s a y s . . [% s/%p ] . \ n" , b u f f e r , &b u f f e r ) ;
18
// Return e v e r y t h i n g fun
19
return ( 0 ) ; }