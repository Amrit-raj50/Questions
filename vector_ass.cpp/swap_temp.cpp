#include <iostream>

using namespace std;

template <class T1, class T2>

void swap(T1 a, T2 b)
{
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    int c = a;
    a = b;
    b = c;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
}

int main(){
    swap(23,56);

    return 0;
}