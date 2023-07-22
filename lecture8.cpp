#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a=34;
    // char c='c';
    // cout<<"The value of a was: "<<a;
    // a=45;
    // c='4';
    // cout<<"The value of is:"<<c;

    //Constants in c++
    // const int a =3;
    // cout<<"The value of a was :"<<a<<endl;
    // a=45;//you wil get an erron because it is constant
    // cout<<"The vaue of a is :"<<a<<endl;

    // int a=3,b=78,c=1233;
//     cout<<"The value of a without setw is :"<<a<<endl;
//     cout<<"The value of a without setw is :"<<b<<endl;
//     cout<<"The value of a without setw is :"<<c<<endl;

// cout<<"The value of a is :"<<setw(4)<<a<<endl;
// cout<<"The value of a is :"<<setw(4)<<b<<endl;
// cout<<"The value of a is :"<<setw(4)<<c<<endl;

    // Operator Precedence
    // cpprecedence.cpp
    int a =3, b=4;
    int c =((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}