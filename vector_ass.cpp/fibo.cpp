#include <cstdio>
#include <iostream>

int fibo(int no){
     int no1 = 0;
     int no2 = 1;
     bool result = false;
     for(int no3 = no2+no1 ; no3 <= no ;no3 = no2+no1){
        if(no3 == no){
            result = true;
            break;
        }
        no1 = no2;
        no2 = no3;
     }
     return result;
}

int main(){
    int no;
    printf("Enter the number:");
    scanf("%d",&no);
    
    // std::cout<< fibo(no)<<std::endl;
    printf("%d",fibo(no));

    return 0;
}