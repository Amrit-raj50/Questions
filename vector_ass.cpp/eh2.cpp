//student name class.....mem ...--name , grade (int 0 - 100),pass(string).
//private : pass , grade .

#include<iostream>
#include<string>

using namespace std;

class Student{
    
    private:
      string password;
      int grade;
      
    public:
      string name;
      
      Student(string Username, string pass, int gra){
          if(pass.size() != 0 &&  ((gra >= 10) && (gra <= 100))){
              name = Username;
              password = pass;
              grade = gra;
              cout << "The student name is : " << name << endl;
          }
          else{
              cout << "Warning: Certain rules you have break so we cannot proceed further" << endl;
          }
      }
      
      void getInfo(string pass){
          if(pass == password){
              cout << "The student name is: " << this->name << endl;
              cout <<"The grade is: " << this->grade << endl;
              cout << "The password is: " << this->password << endl;
          }
          else{
              cout << "Passsword is incorrect" << endl;
          }
      }
      
      void setGrade(string pass, int grade){
          if((pass == password) && ((grade >= 10) && (grade <= 100)))
          {
            int Newgrade = grade;
              cout << "grade is: " << Newgrade << endl; 
          }
          else{
              cout << "Please check you're password or amount must be greater than zero"<< endl;
          }
      }
    
};

int main(){
    
    Student p1("Amrit", "amr", 23);
    
    // p1.getInfo("amr");

    p1.setGrade("amr",45);
    
    
    return 0;
}