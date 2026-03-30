#include <iostream>
#include <string>

using namespace std;

class Parent1{
    public:
        string name ;
        int n ;

        Parent1(string name,int n){
            this->name = name;
            this->n = n;

            cout<<"parent 1"<<endl;
        }
};

class Parent2:public Parent1{
    public:
        string name1 ;
        int n1;

        Parent2(string name1,int n1, string name, int n):Parent1(name,n){
            this->name1 = name1;
            this->n1 = n1;

            cout<<"parent 2"<<endl;
        }
};

class Child1:public Parent2{
    public:
        string name2;
        int n2;
         
        Child1(string name2, int n2, string name1, int n1, string name, int n):Parent2(name1,n1, name, n){
            this->name2 = name2;
            this->n2 = n2;

            cout<<"child 1"<<endl;
        }
};


int main(){

    Child1 baccha("amrit",20,"bap",56,"dadu",78);
    return 0;
}