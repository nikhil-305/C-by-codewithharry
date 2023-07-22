#include<iostream>
using namespace std;
int main(){
// Aray example

    int marks[4]={23, 25, 56, 45};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // you can change the value of an array
    marks[2]=344;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathMarks[6];
    mathMarks[0]=458;
    mathMarks[1]=456;
    mathMarks[2]=568;    
    mathMarks[3]=868;
    mathMarks[4]=5568;
    mathMarks[5]=5618;  

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<mathMarks[4]<<endl;
    cout<<mathMarks[5]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<< i <<" is "<<marks[i]<<endl;
    }
    
    // Pointers and arrays
    int* p = marks;
    cout<<"The value of *p is is "<< *p <<endl;
    cout<<"The value of *(p+1) "<< *(p+1)<<endl;
    cout<<"The value of *(p+2) "<< *(p+2)<<endl;
    cout<<"The value of *(p+3) "<< *(p+3)<<endl;
     return 0;
}