#include <iostream>
#include <cmath>
#include <string>

using namespace std;


// int main(){
//     int arr[5] = {23,34,4,5,6};

//     int num = 0;
//     for(int i = 0 ; i < 5 ; i++){
//        int len = to_string(arr[i]).length();
//     //    cout<<len<<endl;
//         num = num * pow(10,len) + arr[i];
//     }

//     num = num + 1;

//     cout<<"Result : " << num << endl;

//     return 0;
// }


int main(){
    int arr[5] = {23,45,67,89,90};

    string num = "";
    int result;

    for(int i = 0 ; i < 5 ; i++){
        num = num + to_string(arr[i]);
    }
    result = stoi(num) + 1;

    cout<<result<<endl;

    return 0;
}