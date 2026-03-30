#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Add {
    public:

        int add(int a, int b){
            int sum = a+b;
            // cout<<"SUM : "<<sum<<endl
            return sum;
        }
};

class Sub {
    public:
  

        int sub(int a, int b){
            int sum = a-b;
            // cout<<"SUB : "<<sum<<endl;
            return sum;
        }
};
class Mul {
    public:


        int mul(int a, int b){
            int sum = a*b;
            // cout<<"MUL : "<<sum<<endl;
            return sum;
        }
};


class Div {
    public:

        int div(int a, int b){
            int sum = a/b;
            // cout<<"DIV : "<<sum<<endl;
            return sum;
        }
};

class Calc : public Add,public Sub,public Mul,public Div {
    public:
        void display(){
            cout<<"Calculator"<<endl;
        }
};
int main(){
    
    ofstream file;
    file.open("result.txt",ios::app);
   
    Calc c1;
    c1.Add::add(23,67);
    c1.Sub::sub(23,67);

     if(file.is_open()){
             file<<"Result --> "<<c1.Add::add(23,67)<<endl;
             file.close();
    }
    return 0;
}