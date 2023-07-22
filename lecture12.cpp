#include<iostream>
using namespace std;
int main(){
    // What is a pointer ?.-----> data type which holds the address of other data type.
    int a=3;
    int* b= &a;
    cout<<b<<endl;; 
    // & ---> ( Address of ) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address fo a is "<<b<<endl;

    // * ---> (value at)Dereferance operator
    cout<<"The value at address b is "<<b<<endl;

    // pointer to pointer
    int** c= &b;
    cout<<"The address of  b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is"<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}