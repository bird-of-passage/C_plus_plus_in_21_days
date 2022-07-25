// A Demonstration of Enumerated Constants
#include <iostream>
using namespace std;
int main()
{
    enum Days
    {
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    Days today;
    today = Sunday;

    if (today == Sunday || today == Saturday)
    {
        cout << "\nGotta' love the weekends!" << endl;
    }
    else
    {
        cout << "\nBack to work." << endl;
    }

    return 0;
}