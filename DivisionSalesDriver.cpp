//Driver program for finding the quarterly sales of 6 divisions then displaying the total sales for each division

#include <iostream>
#include <iomanip>
#include "DivisionSales.h"
#include <algorithm>
using namespace std;

int main(){

    DivisionSales div[6];    //variables hold the six divisions and four quarters
    double qSale[4];

    //Loops to get the sales values from user for each divisions quarters
    for(int count =0; count < 6; count++){
        cout << "Enter sales data for Division " << (count + 1) << "\t" << endl;
        for(int i = 0; i < 4; i++){
            cout << "\t" << "Quarter " << (i + 1) << ": ";
            cin >> qSale[i];

            //Input validation for only postive numbers
            while (qSale[i] < 0)
            {
                cout << "Enter positive sales data: ";
                cin >> qSale[i];
            }

        }
        //Store the values into DivSales div array
        div[count].setQuarters( qSale[0], qSale[1], qSale[2], qSale[3]);
    }
    //Display results
    cout << "\nSales Report\n";
    cout << fixed << setprecision(2) << showpoint;
    for(int count = 0; count < 6; count++)
    {
        cout << "Sales for Division " << (count + 1) << "\t" << endl;
        for (int test =0; test < 4; test++)
        {
            cout << "\tQuarter " << (test+1) << ": $" << div[count].getQuarters(test) << endl;
        }
        cout << "\tDivision subtotal " <<  div[count].total << "\t" << "\t" << endl;
        cout << "\n" << endl;
    }
    //Calculate the highest subtotal of the six divisions
    double i = div[0].total;
    for (int count =1; count < 6; count++)
    {
        if (div[count].total > i)
            i = div[count].total;
    }
    //Calculate the lowest subtotal of the six divisions
    double x = div[0].total;
    for (int count = 1; count < 6; count++)
    {
        if (div[count].total < x )
            x = div[count].total;
    }
}
