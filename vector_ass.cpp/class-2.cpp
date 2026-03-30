#include<iostream>
#include<string>

using namespace std;

class Student{
    public:
      
    //   Data members....
    
        string name;
        string gender;
        int age;
        
        
    // Constructor......
        
        Student(string name, string gender, int age){
            cout << "The value is going to intialize through construvtor  " << name << "  " <<endl;
            
            this->name = name;
            this->gender = gender;
            this->age = age;
            
            cout << "Intialized the required value in the particular data members" << endl;
        }

        
        
    // Function membders...
        void display(){
            cout << "TO just check if the value is Intialized or not through Constructor" << endl;
            
            cout << "The current object data is:  " << this->name << " " << this->gender << " " << this->age << endl;
        }

    //Destructor
        ~Student(){
            cout << "tabahi .... zalzala  "<< this->name <<endl;
        }
};


int main(){
    
    Student s1("samir singh", "male", 24);
    
    Student s2("Path", "male", 18);
    
    
    s2.display();
    s1.display();
    
    
    return 0;
}