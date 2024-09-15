#include<stdio.h>
#include<limits.h>


int main(){


    int num;
    char str[100];
    scanf("%d\n",&num);
    printf("Num : %d\n",num);

    // gets(str);
    fgets(str,100,stdin);
    printf("String : %s\n",str);

    return 0;
}