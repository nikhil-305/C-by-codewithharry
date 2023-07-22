#include<iostream>
using namespace std;
class Baseclass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class veriable var_base"<<var_base<<endl;
    }
};
class DerivedClass : public Baseclass{
 public:
    int var_derived;
    void display(){
        cout<<"Displaying Base class veriable var_base"<<var_derived<<endl;
        cout<<"Displaying Derived class veriable var_derived"<<var_derived<<endl;
    }
};
int main(){
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;//Pointing base class pointer to derived class
    base_class_pointer->var_base=34;
    // base_class_pointer->var_derived=344;// will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base=3400;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived=98;
    derived_class_pointer->display();
    return 0;
}