#include <iostream>
#include <cstdio>

int main(){
    int no;
    printf("Enter the number : ");
    scanf("%d",&no);

    if(no == 0){
        printf("it is zero.\n");
        if(no % 2 == 0){
            printf("it is even");
        }
        else{
            printf("it is odd");
        }
    }
    else if(no > 0){
        printf("it is positive\n");
         if(no % 2 == 0){
            printf("it is even");
        }
        else{
            printf("it is odd");
        }
    }
    else{
        printf("it is negative.\n");
         if(no % 2 == 0){
            printf("it is even");
        }
        else{
            printf("it is odd");
        }
    }



    return 0;
}