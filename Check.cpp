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

void Check::display() {

    int buffer;
    string ones[20] = {"zero",       "one",       "two",      "three",
                       "four",    "five",      "six",      "seven",
                       "eight",   "nine",      "ten",      "eleven",
                       "twelve",  "thirteen",  "fourteen", "fifteen",
                       "sixteen", "seventeen", "eighteen", "nineteen"};

    string tens[10] = {"zero", "ten",   "twenty",  "thirty", "forty",
                       "fifty", "sixty", "seventy", "eighty", "ninety"};
}
