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

    while (order < 0)
    {
        cout << "Number must be greater than 0: ";
        cin >> order;
        cout << "\n";
    }

    cout << "Enter the available spools in stock: ";
    cin >> stock;
    cout << "\n";

    while (stock < 0)
    {
        cout << "Number must be greater than 0: ";
        cin >> stock;
        cout << "\n";
    }

    cout << "Are there any special shipping charges (per spool)\n",
    cout << "above the regular $10.00 per spool rate (0 for none): ";
    cin >> specialChgs;
    cout << "\n";

    if (specialChgs != 0 )
    {
        cout << "Enter the special shipping charge: ";
        cin >> specialChgs;
        while (specialChgs < 0)
        {
            cout << "Charge must be greater then 0. ";
            cin >> specialChgs;
            cout << "\n";
        }
    }
}

void processDisplayStatus(int ordered,int stock, double shippingCharge){

    //Declare variables
    double bkOrder, spoolsOrdered, spoolTotal, shipping, total;

    cout << "**** Order Summary ****";
    cout << "\n";

    //Calculate backorders
    bkOrder = ordered - stock;
    if(bkOrder < 0){
        bkOrder = 0;

    }

    cout << endl;
    //Display spool ordered and back ordered
    cout << "Spools ordered: " << ordered << "\n";
    cout << "Spools back ordered: " << bkOrder << "\n";

    //Calculate orders in shipment

    spoolsOrdered = ordered - bkOrder;
    cout << "Spools in shipment: " << spoolsOrdered << "\n";
    cout << "\n";

    cout << "**Charges for this shipment**";
    cout << "\n\n";

    //Calculate spool charges

    spoolTotal = spoolsOrdered * UNIT_SPOOL_COST;
    cout << "Spool charges before shipping fees: $ " << spoolTotal << endl;

    //Calculate shipping charges

    shipping = spoolsOrdered * shippingCharge;
    cout << "Shipping charges: $ " << shipping << endl;

    //Calculate  order total
    total = shipping + spoolTotal;
    cout << "Total of shipment: $ " << total << "\n";

}