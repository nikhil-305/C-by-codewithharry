#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary;
        Employee(int inpId){
            id=inpId;
            salary=34.0;
        }
        Employee (){}
};
/*
 Derived class syntax
 Class {{derived - class -name}} : {{visibility-mode}} {{base-class-name}}
 {
    class members/methods/etc...
 }
 Note:
 1.Default visibility mode is private
 2.Private visibility mode: Public member of the class becomes public member of the derived class
 3.Private visibility mode: Public members of the base class becomes private member of the derived class.
*/
// Creating a programmer class derived from employee base class 
class Programmer : public Employee{
    public:
    Programmer(int inpId){
        id=inpId;
    }
    int languageCode=9;
    void getData(){
        cout<<id<<endl;
    }
};


int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillf(10);
    cout<<skillf.languageCode;
    skillf.getData();

    return 0;
}