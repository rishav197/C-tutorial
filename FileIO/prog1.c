#include<stdio.h>

/* ## FileIO ##
File - container in a storage device to store data

- RAM is volatile
- Contents are lost when program terminates
- Files are used to persist the data


## Operation on Files ##
1. Create a File
2. Open a File
3. Close a File
4. Read from a File
5. Write in a File


## Types of Files
1. Text files
textual data for eg .txt, .c
2. Binary data for eg .exe, .mp3, .jpg

## Read & Write a char ## 
1. fgetc(fptr) // uses for read  
2. fputc('A',fptr) //uses for write

## EOF(End of File)
fgetc returns EOF to show that the file has ended




*/

int main(){

    // FILE *fptr;
    // fptr = fopen("prog1.txt","a");

    // fprintf(fptr,"%c",' ');
    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'A');
    // fprintf(fptr,"%c",'N');
    // fprintf(fptr,"%c",'G');
    // fprintf(fptr,"%c",'O');

    // fclose(fptr);


    // FILE *fptr;
    // fptr = fopen("rishav.txt","r");

    // if(fptr==NULL){
    //     printf("file doesn't exist\n");
    // } else{
    //     fclose(fptr);
    // }


    // FILE *fptr;
    // fptr = fopen("test.txt", "a");

    // fprintf(fptr, "%c", '\n');
    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'N');
    // fprintf(fptr, "%c", 'G');
    // fprintf(fptr, "%c", 'O');


    // FILE *fptr;
    // fptr = fopen("test.txt","r");

    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    
    // fclose(fptr);

    /* ##EOF (End of File)  */
    // FILE *fptr;
    // fptr = fopen("test.txt","r");
    // char ch;
    // ch = fgetc(fptr);
    // while(ch!=EOF){
    //     if(ch==' '){
    //         printf("\n");
    //     }
    //     else{
    //         printf("%c",ch);
    //     }
    //     ch=fgetc(fptr);
    // }
    // fclose(fptr);


    // Ques: Make a program to read 5 integers from a file
    // FILE *fptr;
    // fptr = fopen("test.txt","r");
    // int n;
    // fscanf(fptr,"%d",&n);
    // printf("num = %d\n",n);
    // fscanf(fptr,"%d",&n);
    // printf("num = %d\n",n);
    // fscanf(fptr,"%d",&n);
    // printf("num = %d\n",n);
    // fscanf(fptr,"%d",&n);
    // printf("num = %d\n",n);
    // fscanf(fptr,"%d",&n);
    // printf("num = %d\n",n);

    
    /* Ques: Make a prog to input student info from a user & enter it to a file */
    // FILE *fptr;
    // fptr = fopen("test.txt","w");

    // char name[100];
    // int age;
    // float cgpa;

    // printf("Enter name : ");
    // scanf("%s", name);
    // printf("Enter age : ");
    // scanf("%d",&age);
    // printf("Enter cgpa : ");
    // scanf("%f",&cgpa);

    // fprintf(fptr,"%s ", name);
    // fprintf(fptr, "%d ", age);
    // fprintf(fptr, "%f", cgpa);

    // fclose(fptr);

    /*Ques: write a program to write all the odd numbers from 1 to n in a file*/
    FILE *fptr;
    fptr = fopen("odd.txt","w");

    int n;
    printf("n = ");
    scanf("%d", &n);

    for(int i=1; i<=n; ++i){
        if(i%2!=0){
            fprintf(fptr,"%d\n",i);
        }
    }


    return 0;
}