#include <iostream>

int main(){
    int arr[5];

    for(int i = 0 ; i < 5 ; i++){
        std::cout<<"enter a interger :" ;
        std::cin>>arr[i];
    }
    int sum;
    for(int i = 0 ; i < 5 ; i++){
        sum += arr[i];
    }
    int avg = sum / 5;

    for(int i = 0 ; i < 5 ; i++){
        if(avg <= arr[i]){
            std::cout<<"value :"<<arr[i]<<std::endl;
            std::cout<<"Index :"<<i<<std::endl;
            break;
        }
    }
    return 0;
}