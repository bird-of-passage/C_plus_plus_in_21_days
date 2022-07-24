// Demonstrate typedef keyword

#include <iostream>
using namespace std;

typedef unsigned short int USHORT; // typedf defined

int main()
{
    USHORT Width = 5, Length;
    Length = 10;

    // create an unsigned short and initialize with result
    // of multiplying Width by Length

    USHORT Area = (Width * Length);

    cout << "Width: " << Width << endl;
    cout << "Length: " << Length << endl;
    cout << "Area: " << Area << endl;

    return 0;
}