#include<stdio.h>
/* #Conditional Statements
Types
1. if-else
2. Switch
*/

int main(){

    // int age;
    // printf("Enter age : ");
    // scanf("%d",&age);

    // if(age>18){
    //     printf("Adult\n");
    //     printf("They can vote\n");
    //     printf("They can drive\n");
    // }
    // else{
    //     printf("NOT Adult\n");
    // }
    // printf("Thank You Ji!!");


    // if(age>=18){
    //     printf("Adult\n");
    // }
    // else if(age>13 && age<18){
    //     printf("Teenager\n");
    // }
    // else{
    //     printf("Child\n");
    // }


    /* Ternary Operator*/
    // age >= 18 ? printf("Adult\n") : printf("NOT Adult");


    /*Switch Statements*/
    // char day;
    // printf("Enter day (m-S) : ");
    // scanf("%s", &day);

    // switch(day){
    //     case 'm': printf("monday\n");
    //         break;
    //     case 't': printf("tuesday\n");
    //         break;
    //     case 'w': printf("wednesday\n");
    //         break;
    //     case 'T': printf("thursday\n");
    //         break;
    //     case 'f': printf("friday\n");
    //         break;
    //     case 's': printf("saturday\n");
    //         break;
    //     case 'S': printf("sunday\n");
    //         break;
    //     default : printf("NOT a valid day");
    // }


    // int x=2;
    // if(x=-10)
    //     printf("x is equal to 1");
    // else 
    //     printf("x is not equal to 1");


    /* Uppercase and Lowercase chars*/
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("Lower case\n");
    }
    else if(ch>='A' && ch<='Z'){
        printf("Upper case\n");
    }
    else{
        printf("Not english letter");
    }

    return 0;
}