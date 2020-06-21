

#include <iostream>
#include <string>

static const int MIN_SIZE  = 10; // Smallest size of an array that quicksort will sort

/** Sorts the items in an array into ascending order.
 @pre  None.
 @post  theArray is sorted into ascending order; n is unchanged.
 @param theArray  The given array.
 @param n  The size of theArray. */

template<class ItemType>
void insertionSort(ItemType theArray[], int first, int last)
{
    // unsorted = first index of the unsorted region,
    // loc = index of insertion in the sorted region,
    // nextItem = next item in the unsorted region.
    // Initially, sorted region is theArray[0],
    // unsorted region is theArray[1..n-1].
    // In general, sorted region is theArray[0..unsorted-1],
    // unsorted region theArray[unsorted..n-1]
    for (int unsorted = first + 1; unsorted <= last; unsorted++)
    {

    }
}