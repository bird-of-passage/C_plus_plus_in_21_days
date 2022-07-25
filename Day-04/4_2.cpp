// A Demonstration of Subtraction and Integer Overflow

#include <iostream>
using namespace std;

int main()
{
    unsigned int difference;
    unsigned int bigNumber = 100;
    unsigned int smallNumber = 50;

    difference = bigNumber - smallNumber;
    cout << "Difference is: " << difference;

    difference = smallNumber - bigNumber;
    cout << "\nNow difference is: " << difference << endl;

    return 0;
}

// output:
// Difference is: 50
// Now difference is: 4294967246   //bcoz of unsigned type
