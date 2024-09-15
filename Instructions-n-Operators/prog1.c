#include<stdio.h>
#include<math.h>

/* #Instuctions and Operators */
/* These are statement in a program
Types of Instuc
1. Type Declaration Instruc
2. Arithmetic Instruc
3. Control Instruc
*/

/* Arithmetic Instructions */
// b^c --> pow(b,c)

int main(){
    // int a =22;
    // int b = a;
    // int c = b*6;
    // int d = 1, e;
    // printf("%d", e); //some garbage val printed here

    // int x,y,z;
    // x = y = z = 4;
    // printf("x = %d, y = %d, z = %d", x,y,z);

    // int a = 2, b = 5;
    // int power = pow(a, b);
    // printf("%d", power);

    /* Modular operator (it can only work for integers)*/ 
    // printf("%d", 16%10);

    /* #Type Conversion
    1. implicit conversion
    2. explicit conversion
    */
    /* int op int --> int 
       int op float --> float
       float op float --> float
    */

//    int a = (int)2.99999; //explicit
//    printf("%d\n", a);

    /* #Operator Precedence
    1. *,/,% 
    2. +,-
    3. =
    if precedence is same 
    then go left to Right
    */

    // printf("%d\n", 5*2-2*3);
    // printf("%d\n", 5*2/2*3);
    // printf("%d\n", 5*(2/2)*3);
    // printf("%d\n", 5+2/2*3);

    /*Instructions*/
    /*
    Used to determine flow of program
    a. sequence control
    b. decision control
    c. loop control
    d. case control
    */

    printf("%d\n", 4!=4);
    printf("%d\n", 4==4);

    return 0;
}