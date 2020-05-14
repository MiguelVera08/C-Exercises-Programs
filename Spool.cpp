//Program displays the status of an order for spools of wiring and calculates the total
//expenses of order.

#include<iostream>
#include<iomanip>
using namespace std;

//Global constants variables
const double UNIT_SPOOL_COST = 100.00, SHIPPING_CHARGE = 10.00;

void getOrderDetails (int &, int &, double &);
void processDisplayStatus (int,int, double = SHIPPING_CHARGE);
