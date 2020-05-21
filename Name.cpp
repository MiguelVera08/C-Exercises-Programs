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

    string nameID; //Holds the name being searched
    int results; //Holds the search results

    //Get name to search for from user
    cout << "Enter the name you wish to search for: ";
    getline(cin,nameID);

    //Search for the ID
    results = binarySearch(name, SIZE, nameID);

    //If search returns -1, name is not on list
    if (results == -1)
        cout<< "Name is not on the list. \n";
    else

    {
        cout << "Name " << nameID << " was found in element "
             << results << " of the array. \n";
    }

    return 0;

}
//Function will sort the array in ascending order.
void selectionSort(string names[], int size){

    int startScan, minIndex;
    string minValue;

    for (startScan=0; startScan < (size - 1); startScan++){

    }
}