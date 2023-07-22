#include<iostream>
using namespace std;
class Baseclass{
    public:
    int var_base;
    virtual void display(){
        cout<<"1 Displaying Base class veriable var_base"<<var_base<<endl;
    }
};
class DerivedClass : public Baseclass{
 public:
    int var_derived =2;
    void display(){
        cout<<"2 Displaying Base class veriable var_base"<<var_derived<<endl;
        cout<<"2 Displaying Derived class veriable var_derived"<<var_derived<<endl;
    }
};
int main(){
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    DerivedClass obj_derived;

    base_class_pointer=&obj_derived;
    base_class_pointer->display();


    return 0;
}