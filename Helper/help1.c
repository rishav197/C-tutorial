#include<stdio.h>

int main(){

    int n;
    printf("Enter val of n = ");
    scanf("%d", n);

    for(int i=1; i<=n; ++i){
        printf("%d and %d",i+5,i-5);
    }


    return 0;
}