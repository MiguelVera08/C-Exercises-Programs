//InsertionSort algorithm breakdown and example

#include <iostream>
#include <string>

template<class ItemType>
void insertionSort(ItemType theArray[], int n);

/** Sorts the items in an array into ascending order.
 @pre  None.
 @post  theArray is sorted into ascending order; n is unchanged.
 @param theArray  The given array.
 @param n  The size of theArray. */
//int main()
//{
//std::string a[6] = {"Z", "X", "R", "K", "F", "B"};
//insertionSort(a, 6);
//for (int i = 0; i < 6; i++)
//std::cout << a[i] << " ";
//std::cout << std::endl;
//}  // end main

template<class ItemType>
void insertionSort(ItemType theArray[], int n){

    // unsorted = first index of the unsorted region,
    // loc = index of insertion in the sorted region,
    // nextItem = next item in the unsorted region.
    // Initially, sorted region is theArray[0],
    // unsorted region is theArray[1..n-1].
    // In general, sorted region is theArray[0..unsorted-1],
    // unsorted region theArray[unsorted..n-1]
    for (int unsorted = 1; unsorted < n; unsorted++){

    }
}