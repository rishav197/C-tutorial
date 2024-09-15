#include<stdio.h>
/* Loop Control Instructions */ 

int main(){

    // printf("Hello Universe\n");
    // printf("Hello Universe\n");
    // printf("Hello Universe\n");
    // printf("Hello Universe\n");


    /* ------Syntax of for loop:---------

    for(initialisation; condition; updation){
        //do something
    }
    */

    //Ques: print value from 0 to 10
    //iterator/counter-->i
    // for(int i=0; i<=10; ++i){
    //     printf("%d ", i);
    // }

    /*
    i++ (post increment)
    ++i (pre increment)
    i-- (post decrement)
    --i (pre decrement)
    */

   /* -------special things----- 
   1. Increment Operator
   2. Decrement Operator
   3. Loop counter can be float
   or even character
   4. Infinite Loop */

//    for(float i=1.0; i<=5.0; i++){
//         printf("%f\n", i);
//    }


//    for(char i='a'; i<='z'; i++){
//         printf("%c\n", i);
//    }


    /* Syntax for "While Loop"

    while(condition){

        //do something
    } */

    //Ques: print the no. from 1 to n, if n is given by user
    // int n;
    // printf("Enter n = ");
    // scanf("%d", &n);

    // int i=0;
    // while(i<=n){
    //     printf("%d\n", i);
    //     i++;
    // }


    /* Syntax for do-while loop 
    do {
        // do something
        updation
    } while(condition);
    */

//    int n;
//    printf("n = ");
//    scanf("%d", &n);

//     int i=1;
//     do{
//         printf("%d ",i);
//         i++;
//     } while(i<=n);


    // int n=10;  
    // int sum = 0;  
    // for(int i=1, j=n; i<=n && j>=1; i++, j--){
    //     sum += i;
    //     printf("%d\n",j);
    // }
    // printf("Sum : %d", sum);


    //Ques: Print table of given number 
    // 4 x 3 = 12
    // int n;
    // printf("n = ");
    // scanf("%d",&n);

    // int i=1;
    // while(i<=10){
    //     printf("%d\n",n*i);
    //     i++;
    // }


    /* break & continue keyword in C lang 
    1. break --> to exit loop
    2. continue --> to skip iteration
    */
     
    
    /* ques: print all the odd nums from 5 to 50 */
    // for(int i=5; i<=50; ++i){
    //     if(i%2==0){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }


    /* ques : factorial */
    // int n;
    // printf("n = ");
    // scanf("%d",&n);
    
    // int long long fact=1;
    // for(int i=n; i>=1; --i){
    //     fact = fact*i;
    // }
    // printf("%d!",fact);




    return 0;
}