#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //     // Connecting our file with hout stream
    //     ofstream hout("sample60.txt");
    //     // Creating a name string and filling it with string entered by the user
    //     cout<<"Enter your name";
    //     string name;
    //     cin>>name;
    // //  writing a string to the file
    //     hout<<"My name is "+name;
    //     hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin >> content;
    cout << "THe content of this file is : " << content;
    hin.close();
    return 0;
}