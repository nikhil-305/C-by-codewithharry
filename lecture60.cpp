#include <iostream>
#include <fstream>
/*
The usuful classes for working with files in c++ are:
1.fstreambase
2.ifstream-->derived from fstreambase
3.ofstream-->derived from fstreambase
*/
// In order work with files in c++ , you will have to open it .Primarily , there are 2 ways to open a files:
// 1.Using the constuctor
// 2.using the member function Open() of the class
using namespace std;
int main()
{
    string st = "Harry bhail";
    string st2;
    // opening the files using constructor and writing it
    // ofstream out("sample60.txt"); // write operator
    // out << st;

    // Opening file using constructor and reading it
    // ifstream in("sample60b.txt");// Read operation
    // in>>st2;
    // getline(in,st2);
    // cout<<st2;
    return 0;
}