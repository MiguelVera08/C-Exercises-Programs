//Program displays the status of an order for spools of wiring and calculates the total
//expenses of order.

#include<iostream>
#include<iomanip>
using namespace std;

//Global constants variables
const double UNIT_SPOOL_COST = 100.00, SHIPPING_CHARGE = 10.00;

void getOrderDetails (int &, int &, double &);
void processDisplayStatus (int,int, double = SHIPPING_CHARGE);

int main(){

    //Local variables
    int ordered = 0;
    int stock = 0;
    double specialCharges = 0.0;

    //Function prototypes
    getOrderDetails(ordered, stock, specialCharges);
    if (specialCharges != 0)
    {
        processDisplayStatus(ordered, stock, SHIPPING_CHARGE + specialCharges);
    }
    else
    {
        processDisplayStatus(ordered, stock, SHIPPING_CHARGE);
    }

    return 0;
}

void getOrderDetails(int &order, int &stock, double &specialChgs){

    cout << "Enter the number of spools ordered: ";
    cin >> order;
}