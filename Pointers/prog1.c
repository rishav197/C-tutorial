#include<stdio.h>
/* Concept of Pointers */
void square(int n);
void _square(int* n);
void swap(int* num1, int* num2);
void calcSumAvgProd(int a, int b, int* sum, float* avg, int* prod);


void square(int n){
    n = n*n;
    printf("square = %d\n", n);
}

void _square(int* n){
    *n = (*n)*(*n);
}

void swap(int* num1, int* num2){
    int tmp = *num1;
    *num1=*num2;
    *num2=tmp;
}

void calcSumAvgProd(int a, int b, int* sum, float* avg, int* prod){
    *sum = a+b;
    *avg = (a+b)/2;
    *prod = a*b;
}

int main(){

    // int age = 25;
    // int* ageptr = &age;

    //address 
    // printf("%p\n",&age);

    // printf("%u\n",&age); //print address of age var
    // printf("%u\n",ageptr); //stores address of age var
    // printf("%u\n",&ageptr); //print address of pointer
    // printf("%u\n",*ageptr);
    // printf("%u\n",*(&age));
    // printf("%u\n",**(&ageptr));


    /* ## Pointers in Functions call ##
    1. Call by value :
    we pass value of var as argument
    2. Call by reference :
    we pass address of var as argument

    */


//    int number = 5;
//    square(number);
//     printf("number = %d\n",number);


    // _square(&number);
    // printf("number = %d\n",number);


    // int a = 11;
    // int b = 17;
    // printf("a = %d, b = %d\n",a, b);
    // swap(&a, &b);
    // printf("a = %d, b = %d\n",a, b);


    /*Ques: Write a function to calculate the sum, product & average of 2 numbers. 
    print that average in the main function.
    */

    int a=8, b=9;
    int sum, prod; float avg;
    calcSumAvgProd(a,b,&sum,&avg,&prod);
    printf("sum = %d, avg = %f, prod = %d\n",sum,avg,prod);


    return 0;
}