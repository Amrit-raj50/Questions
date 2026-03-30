#include<iostream>

using namespace std;

template<class T1, class T2>

void add(T1 a, T2 b)
{
    cout << a+b << endl;
}
// void add4(double a, float b){
//     cout << a+b << endl;
// }

// void add3(int a, float b){
//     cout << a+b <<endl;
// }

// void add2(double a, double b){
//     cout << a+b <<endl;
// }

// void add1(float a, float b){
//     cout << a+b <<endl;
// }

// void add(int a, int b){
//     cout << a+b <<endl;
// }

int main(){
    
    add(10, 20);//int , int
    add(10, 67.8);// int, float
    add(45.687, 54.869);
    add('A', 'g');
    // add("samir", "Hii");
    return 0;
}


