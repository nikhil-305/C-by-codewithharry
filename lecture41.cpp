#include <iostream>
using namespace std;
/*
Syntax for inheriting in multiple inheritance
class DerivedC: visibility.mode base1, visibility.mode base2
{
    Class body of class "DerivedC"
}
*/
class Base1
{
protected:
    int base1int;

public:
    void Set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void Set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base1int<<endl;
            cout<<"The sum of these value is "<<base1int+base2int<<endl;
        }
};
/*
The inherited derived class will look something like this :
Data members:
    base1int ---> protected
    base2int ---> protected

Member function:
    set_base1int()--->public
    set_base2int()--->public
    set_show()--->public
*/
int main()
{
    Derived harry;
    harry.Set_base1int(25);
    harry.Set_base2int(5);
    harry.show();
    return 0;
}