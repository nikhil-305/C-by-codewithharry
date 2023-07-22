#include <iostream>
using namespace std;
/*
Case1;
class B : public A{
    // Order of execution of constroctor -> first A() then B()
};
Case2:
class A: public B, public C{
    // Order of executionn of constructor -> B() then C() and A()
}
Case3:
class A: public B, virtual public C{
    // order of execution of constructor -> C() then B() and A()
}
*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Bas2 class constructor called " << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};
class Derived: public Base1, public Base2 {
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a) , Base2(b){
            derived1=c;
            derived2=d;
            cout<<"Derived class construtor called "<<endl; 
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is:"<<derived1<<endl;
            cout<<"The value of derived2 is:"<<derived2<<endl;
        }
};
int main()
{
    Derived harry(1,2,3,4);
    harry.printDataBase1();
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}