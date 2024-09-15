#include<stdio.h>
#include<stdlib.h>

int main(){
    /* To know bites of memory */
    // printf("%d", sizeof(int));
    // printf("%d", sizeof(float));
    // printf("%d", sizeof(char));


    int *ptr;
    ptr = (int*) malloc(4*sizeof(int));
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;

    for(int i=0; i<4; i++){
        printf("%d\n", ptr[i]);
    }


    return 0;
}