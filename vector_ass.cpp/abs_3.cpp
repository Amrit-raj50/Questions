#include <iostream>

using namespace std;

class Watch{
    public:
       virtual void modelInfo() = 0;
       virtual void weightInfo() = 0;

       void display(){
        cout<<"Watch is accessed" << endl;
       }
};

class Cisco : public Watch {
    public:
        void modelInfo(){
            cout<<"cis-45-SDS"<<endl;
        }
        void weightInfo(){
            cout<<"43g"<<endl;
        }
};

int main(){
    Cisco obj;
    obj.modelInfo();
    obj.weightInfo();

    return 0;
}