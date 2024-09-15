#include<stdio.h>

/* -------------Functions------------
Functions : block of code that performs particular task

Take argument --> Do work --> Return Result

1. it can be used multiple times
2. increase code resuability


## Syntax 1  ##
Function Prototype 
void printHello();

## Syntax 2  ##
Function Definition
void printHello() {
    print("Hello");
}

## Syntax 3  ##
Function Call
int main() {
    printHello() --calls func
    return 0;
}


## Properties of functions
1. execution always starts from main
2. a function gets called directly or indirectly from main
3. there can be multiple functions in a program

## Functions Types
1. Library func:
special functions inbuilt in C lang

2. User defined:
declared & defined by progrmmer

## Argument vs Parameter
1. values that are        values in func
passed in func            declaration & definition
call

2. used to send value     used to receive value


3. acutal parameter       formal parameter

*/

//declaration/prototype
void prtHello();
// void prtGoodbye();

void prtHello() {
    printf("Hello\n");
}

void prtGoodbye(){
    printf("Goodbye\n");
}


int main(){

    prtHello();
    // prtGoodbye();
    prtHello();


    return 0;
}