#include <iostream>
using namespace std;
class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = 8;
        data3 = 9;
    }
    void printData();
};
void Simple ::printData()
{
    cout << "The value of data1 and data2 and data3 " << data1 << " , " << data2 << " , " << data3 << endl;
}
int main()
{
    Simple s(12, 13);
    s.printData();

    return 0;
}