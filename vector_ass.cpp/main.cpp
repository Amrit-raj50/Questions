#include <iostream>
#include <cstdio>
using namespace std;
enum var{
    high = 56,
    low
};
int main(){
    enum var var_name = high;
    int a = 20;
    int b = 30;
    int sum = a + b;
    std::cout << "hello there!" << std::endl;
    std::cout << sum << std::endl;

    std::cout<<var_name<<std::endl;  
    // printf("SUM :- %d",sum);
    // printf("SUM :- %d",sum);

    // int a = 10;
    //pointers ..............
    int *ptr = &a;
    std::cout<<ptr<<std::endl;
    std::cout<<*ptr<<std::endl;
    *ptr = 46;
    std::cout<<*ptr<<std::endl;
    std::cout<<ptr<<std::endl;

    int arr[3] = {23,45,67};
    int *ptrArr[3];

    for(int i = 0 ; i < 3 ; i++){
        ptrArr[i] = &arr[i];
    }
    for(int i = 0 ; i < 3 ; i++){
        std::cout<<ptrArr[i]<<std::endl;
        int **ptr1 = &ptrArr[i];
        std::cout<<ptr1<<std::endl;
    }


    return 0;
}

