#include<stdio.h>
#include<string.h>


struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void prtAddress(struct address add);

struct vector{
    int xcmp; //x-component
    int ycmp; //y-component
};

void calcSum(struct vector v1, struct vector v2, struct vector* v);

int main(){

    printf("Staring Point\n");
    
    // struct address adds[5];
    //input 
    // printf("Enter info person 1: \n");
    // scanf("%d", &adds[0].houseNo);
    // scanf("%d", &adds[0].block);
    // scanf("%s", adds[0].city);
    // scanf("%s", adds[0].state);

    // prtAddress(adds[0]);

    //Ques: 2D vector
    struct vector v1 = {40, 50};
    struct vector v2 = {60, 70};
    struct vector v = {0};

    calcSum(v1,v2,&v);
    printf("v = %di + %dj\n", v.xcmp, v.ycmp);
    

    return 0;
}

void prtAddress(struct address add){
    printf("Address : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}

void calcSum(struct vector v1, struct vector v2, struct vector *v){
    v->xcmp = v1.xcmp+v2.xcmp;
    v->ycmp = v1.ycmp+v2.ycmp;
}