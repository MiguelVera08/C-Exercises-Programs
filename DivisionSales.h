
//Header file for Division sales program
#ifndef DivisionSales_h
#define DivisionSales_h

class DivisionSales{

private:
    double quarters[4];         //Array to hold the quarter sales figures for the division
    static double totalSales;   //Variable holds total corporate sales for all divisions

public:
    void setQuarters(double, double, double, double ); //Member function that stores quarter sales
    double getQuarters(int);                           //Get the value of a element in the array
    static double getTotalSales();                    //Get the total of the sales
    double total;	                //Variable holds the subtotal of each division

};
#include "DivisionSales.cpp"
#endif
