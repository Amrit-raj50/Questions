#include <iostream>

int main(){
    int no;
    std::cin>>no;

    int sum = 0;
    for(int temp = no ; temp > 0 ; temp = temp / 10){
        int dig = temp % 10;
        sum = dig + sum * 10;
std::cout<<sum<<std::endl;
    }
    

    if(sum == no){
        std::cout << "it is a palindrome number." << std::endl;
    }
    else{
        std::cout << "it is not a palndrome number." << std::endl;
    }

    return  0;
}