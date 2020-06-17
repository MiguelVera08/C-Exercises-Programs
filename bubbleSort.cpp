//bubbleSort in C++

#include <iostream>
#include <string>

//Sorts items in an array into ascending order.

template<class ItemType>

//Takes in an array as param, and the size of the array as second param
void bubbleSort(ItemType theArray[], int n){

    bool sorted = false; // False when swaps occur
    int pass = 1;
    while(!sorted && (pass < n)){

        // At this point, theArray[n+1-pass..n-1] is sorted
        // and all of its entries are > the entries in theArray[0..n-pass]
        sorted = true; // Assume sorted
        for(int index = 0; index < n - pass; index++){

        }
    }
}