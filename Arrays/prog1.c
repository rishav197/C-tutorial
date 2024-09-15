#include<stdio.h>
void storeTables(int arr[][10], int n, int m, int number);
/* ## Arrays ##

input & output in array
scanf("%d",&marks[0]);
printf("%d",marks[0]);

## Initialization of Array
int marks[] = {97,98,89};
int marks[3] = {97,98,89};

## Arrays as function Argument ##
//Function Declaration
void printNumbers(int arr[], int n)
or 
void printNumbers(int* arr, int n)
//Function Call
printNumbers(arr,n);

//Multidimensional Arrays
2D Arrays
int arr[][] = {{1,2},
               {3,4}};
//access arr[0][0]

*/


void storeTables(int arr[][10], int n, int m, int number){
    for(int i=0; i<m; ++i){
        arr[n][i]=number*(i+1);
    }
}


int main(){
    // int n = 3;

    // int marks[n];
    // printf("Enter Phy : ");
    // scanf("%d",&marks[0]);

    // printf("Enter Chem : ");
    // scanf("%d",&marks[1]);

    // printf("Enter Math : ");
    // scanf("%d",&marks[2]);

    // printf("Phy = %d, Chem = %d, Math = %d",marks[0],marks[1],marks[2]);


    /*Ques: write a prog to enter price of 3 items & print their final cost with gst 18%*/
    // int n =3;
    // float items[n];

    // for(int i=0; i<n; ++i){
    //     printf("Enter price of Item %d : ",(i+1));
    //     scanf("%f",&items[i]);

    //     items[i] += 0.18*items[i];
    // }

    // for(int i=0; i<n; ++i){
    //     printf("final cost of Item %d: %f\n",(i+1),items[i]);
    // }

    // double ch;
    // printf("%d",sizeof(ch));

    // char ch = 'd';
    // char *ptr = &ch;
    // printf("ptr = %u\n",ptr);
    // ptr++;
    // printf("ptr = %u\n",ptr);


    // int aadhar[5];
    // int* ptr = &aadhar[0];

    // for(int i=0;i<5; ++i){
    //     printf("%d indx : ",i);
    //     scanf("%d",(ptr+i));
    // } printf("\n");

    // for(int i=0;i<5; ++i){
    //     printf("%d indx = %d\n",i,*(ptr+i));
    // }


    // ## 2D Arrays ##
    // int marks[2][3];
    // marks[0][0]=90;
    // marks[0][1]=89;
    // marks[0][2]=78;

    // marks[1][0]=90;
    // marks[1][1]=89;
    // marks[1][2]=78;

    // printf("%d",marks[0][1]);


    // Ques: write a function to reverse an array.
    // int arr[] = {5,4,3,2,1};
    // int N = 5;    
    // for(int i=0; i<N/2; ++i){
    //     int tmp = arr[i];
    //     arr[i]=arr[N-1-i];
    //     arr[N-1-i]=tmp;
    // }

    // for(int i=0; i<N; ++i){
    //     printf("%d ",*(arr+i));
    // }


    // Ques: Stores tables
    int tables[2][10];
    storeTables(tables,0,10,5);
    storeTables(tables,1,10,15);

    for(int i=0; i<10; ++i){
        printf("%d ",tables[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; ++i){
        printf("%d ",tables[1][i]);
    }


    return 0;
}