#include<stdio.h>
#include<string.h>
void prtString(char str[]);
int countVowels(char str[]);


/* ## Strings ##
a character array terminated by a '\0'(null character)
null character --> denotes string termination

## Initialsing Strings
char name[] = {'S','H','R','A','D','H','A','/0'};
char name[] = "SHRADHA";

char class[] = {'A','P','N','A','','C','O','l','l','E','G','E','\0'};
char class[] = "APNA COLLEGE";

## IMPORTANT ##
scanf() cannot input multi-word strings with spaces 
here, gets() & puts() come into picture

String Functions 
gets(str)-->Dangerous & Outdated
input a string
(even multiword)

puts(str)
output a string

fgets(str,n,file) file=stdin (standard input)
stops when n-1 chars
input or new line is 
entered


## Standard Library Functions
<string.h>

1. strlen(str)
count number of characters excluding '\0'

2. strcpy(newStr,oldStr)
copies value of old string to new string

3. strcat(firstStr, secStr)
concatenates first string with second string

4. strcmp(firstStr, secStr)
compares 2 strings & returns a value
0 -> string equal
positive -> first>second (ASCII)
negative -> first<second (ASCII)


---------------END--------------
*/

// void prtString(char str[]){
//     for(int i=0; str[i]!='\0'; ++i){
//         printf("%c",str[i]);
//     }
// }

int countVowels(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; ++i){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    return count;
}
int main(){
    // char s[] = "SHRADHA KHAPRA";
    // prtString(s); //alternative to print string
    // printf("\n");
    // printf("%s",s);

    // char *canChange = "Hello World";
    // puts(canChange);
    // canChange = "Hello";
    // puts(canChange);

    // char oldStr[] = "oldStr";
    // char newStr[] = "newStr";
    // strcpy(newStr,oldStr);
    // puts(newStr);


    // char firstStr[100] = "Hello ";
    // char secStr[] = "World";
    // strcat(firstStr,secStr);
    // puts(firstStr);

    // char firstStr[] = "HHHC";
    // char secStr[] = "HHHA";
    // printf("%d",strcmp(firstStr,secStr));


    //Ques: Take a string input from the user using %c
    // char str[100];
    // char ch;
    // int i=0;

    // while(ch!='\n'){
    //     scanf("%c",&ch);
    //     str[i]=ch;
    //     ++i;
    // }
    // str[i]='\0';
    // puts(str);


    /* Ques: write a function to count the occurrence of vowels
     in a string 
     vowels --> a,e,i,o,u
     */
    char st[] = "rishaaamr";
    printf("%d",strlen(st)-countVowels(st));

    return 0;
}