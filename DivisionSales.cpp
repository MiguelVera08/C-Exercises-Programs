
#include "DivisionSales.h"
#include <iostream>
using namespace std;

//Definition of the static member of DivisionSales class
double DivisionSales::totalSales = 0.0;
//Array will hold the division quarterly sales.
void DivisionSales::setQuarters(double quarter1, double quarter2, double quarter3, double quarter4){
    quarters[0] = quarter1;
    quarters[1] = quarter2;
    quarters[2] = quarter3;
    quarters[3] = quarter4;

    //Add all the quarter values to the static TotalSales
    for(int i =0; i < 4; i++)
    {
        totalSales += quarters[i];
    }
    //Add subtotal values for each division
    total = quarter1 + quarter2 + quarter3 +quarter4;
};

//Array will return the value of element in the subscript.
double DivisionSales::getQuarters(int quarter)
{
    return quarters[quarter];
}

//Returns the total of the sales
double DivisionSales::getTotalSales()
{
    return totalSales;
}