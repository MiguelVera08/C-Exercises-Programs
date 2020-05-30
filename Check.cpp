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

    buffer = amount/1000;
    if (buffer > 0)
        cout << " " << ones[buffer] << " thousand " ;
        amount = amount % 1000;
        if (amount == 0)
            cout << tens[buffer] << " ";
        buffer = amount/100;
    if (buffer > 0)
        cout << ones[buffer] << " hundred ";
        amount = amount % 100;
        if (amount >=20) {
            buffer = amount / 10;
            if (buffer < 10)
                cout << tens[buffer] << " ";

        }else if (amount >= 10)
        {
            cout << ones [amount] << " ";
            return;
            }
            amount = amount % 10;
            if (amount > 0)
            cout << ones[amount];
            cout << " ";
}

//main
int main(){

    //Creat Variables to store input from user
    string date;
    double check_amount;
    string payee;
    string address;
    string check_number;
    string memo;
    char again = 'y';

    do {
        //Get input from user
        cout <<  "\nEnter the date (Month/Day/Year): ";
        cin >> date;
        fflush (stdin);
        //Name of payee
        cout << "\nEnter the payee: ";
        getline (cin, payee);
        //Address
        cout << "\nEnter the address of payee: ";
        getline (cin, address);
        //Check number
        cout << "\nEnter the check number: ";
        getline (cin, check_number);
        //Memo for check
        cout << "\nEnter the memo for the check: ";
        getline (cin, memo);
        //Check amount
        cout << "\nEnter the amount: ";
        cin >> check_amount;

        //Inpute validation for check amount.
        while (((check_amount < 0) || (check_amount > 10000)) || (cin.fail()))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Amount must be positive and between 0 and 10,000: \n";
            cout << "Enter a valid amount: ";
            cin >> check_amount;
            cout << "\n";
        }

        //Calculate cents
        int thousand = check_amount / 1000;
        int hundred = (check_amount / 100) - (thousand * 10);
        int ten = (check_amount / 10) - ((thousand * 100) + (hundred * 10));
        int one = (check_amount)-((thousand * 1000) + (hundred * 100) + (ten * 10));
        int t_alt = ((ten * 10) + one);
        int cents = (check_amount * 100) - ((thousand * 100000) + (hundred * 10000) + (ten * 1000) + (one * 100));
    }

}
