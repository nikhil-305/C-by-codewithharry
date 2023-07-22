#include<iostream>
using namespace std;

 typedef struct employee
    {
        // data
        int eId;
        char favChar;
        float salary;

    }ep;

    union money
    {
        /* data */
        int rice;//4
        char car;//1
        float pounds;//4
    };
    

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // struct employee harry;
    // harry.eId=1;
    // harry.favChar='c';
    // harry.salary = 1200000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;


    return 0;
}