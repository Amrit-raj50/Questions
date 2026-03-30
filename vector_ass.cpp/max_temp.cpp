#include <iostream>

using namespace std;

template <class T1,class T2>

int max(T1 a, T2 b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout<<"Maximum : "<<max(56,78)<<endl;

    return 0;
}