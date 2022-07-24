// A Demonstration of Putting Too Large a Value in an unsigned short Integer
#include <iostream>
using namespace std;
int main()
{
    unsigned short int smallNumber;
    smallNumber = 65535;
    cout << "small number: " << smallNumber << endl;
    smallNumber++;
    cout << "small number: " << smallNumber << endl;
    smallNumber++;
    cout << "small number: " << smallNumber << endl;

    return 0;
}