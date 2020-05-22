//Program calculates average scores based on the inputs by user

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void selectionSort (double *, int);
void showArray (double *, int);
void scoreAverage (double, int);

int main(){

    double *scores = nullptr,   //Dynamically allocate an array
    total = 0.0,  //Accumulator
    average;      //Holds average scores
    int numScores;    //Holds number of scores

    //Get number of scores from user
    cout << "Enter the number of Scores:  ";
    cin >> numScores;
    cout << "\n";
}