//Program sorts an array of strings and then displays the list of names in order

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


//Function prototype
void selectionSort(string [], int);
void displayNames(const string [], int);
int binarySearch(const string [], int, string);

int main(){

    const int SIZE = 20;

    //Create array of strings
    string name[SIZE] =
            { "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
              "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
              "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
              "Moretti, Bella", "Wu, Hong",     "Patel, Renee",   "Harrison, Rose",
              "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth" };

    //Call function to sort the strings
    selectionSort(name, SIZE);

    //Call function to display the sorted strings
    cout << "The names in sorted order are: \n\n";
    displayNames(name, SIZE);
    cout << "\n";
}