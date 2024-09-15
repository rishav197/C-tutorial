#include<stdio.h>
#include<string.h>

/* ## Structures ##
a collection of values of different data types

Example :
for a student store the following info:
name (String)
roll no. (Int)
age (Float)


## Sytax ## (User-defined datatype)
struct student{
    char name[100];
    int roll;
    float age;
};

# Structures are stored in contiguous memory location

## Array of Structures
struct student ECE[100];
struct student COE[100];
struct student IT[100];

Access
IT[0].roll = 200;
IT[0].cgpa = 8.5;

## Initializing Structures ##
struct student s1 = {"Sharadha, 1664, 7.9"};
struct student s2 = {0};


## Pointers to Structures ##
struct student s1;
struct student *ptr;
ptr = &s1;

## Arrow Operator ##
(*ptr).code <--> ptr->code


## Typedef Keyword ##
used to create alias for data types
typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
} coe; 

coe student1;

-----------END---------------
*/

// struct student {
//     int roll;
//     char name[100];
//     float weight;
// };


// struct student {
//     int roll;
//     char name[100];
//     float cgpa;
// };

// typedef struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// } stu;



int main(){
    // struct student s1;
    // s1.roll = 90;
    // s1.weight = 90.8;
    // strcpy(s1.name,"Khapra");

    // printf("Student name = %s\n", s1.name);
    // printf("Student roll no = %d\n",s1.roll);
    // printf("Student weight = %f\n",s1.weight);


    // struct student COE[100]; // arry of students of type struct student
    // COE[0].roll = 5;
    // strcpy(COE[0].name,"Khapra");
    // COE[0].cgpa = 8.2;

    // printf("Name : %s, Roll no : %d, CGPA : %f\n", COE[0].name, COE[0].roll,COE[0].cgpa);


    // struct student s2 = {16,"Xrox",9};
    // COE[1]=s2;
    // printf("%s\n",COE[1].name);
    // printf("%d\n",COE[1].roll);
    // printf("%f\n",COE[1].cgpa);


    // struct student s3 = {23,"Khapra",7.8};
    // struct student *ptr = &s3;
    // printf("Roll no : %d\n", (*ptr).roll);
    // printf("Name : %s\n", ptr->name);
    // printf("Cgpa : %f\n", ptr->cgpa);

    // stu s1;


   


    return 0;
}



