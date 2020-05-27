//Program displays a virtual Check, after getting the date, payee's name, and amount from user.



#include <cstdlib>
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

class Check
{
private:
    int amount;               //Member variable.

public:                    //Member function Prototypes
    Check(double a)
    {
        amount = a;
    }

    void display();
};
