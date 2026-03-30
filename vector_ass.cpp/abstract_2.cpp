#include <iostream>

using namespace std;

//How to do ?
class Mobile {
    public:
        virtual void processorInfo() = 0;
        virtual void RAMInfo() = 0;
        virtual void IMIEno() = 0;


        void display(){
            cout<<"mobile is accesed"<<endl;
        }
};


//What to do?

class Mi: public Mobile {
    public:
       
       void processorInfo(){
        cout<<"crazy processsor"<<endl;
       }

       void RAMInfo(){
        cout<<"68TB"<<endl;
       }

       void IMIEno(){
        cout<<"234567890-sdfghjkl;'tjkl;"<<endl;
       }
};

class Samsung: public Mobile {
    public:
       
       void processorInfo(){
        cout<<"chodu processsor"<<endl;
       }

       void RAMInfo(){
        cout<<"68KB"<<endl;
       }

       void IMIEno(){
        cout<<"shgcycxviudskjbfskdsfvdshd"<<endl;
       }
};

int main(){
    Mi obj;
    obj.processorInfo();
    obj.RAMInfo();
    obj.IMIEno();

    Samsung obj1;
    obj1.processorInfo();
    obj1.RAMInfo();
    obj1.IMIEno();

    return 0;
}