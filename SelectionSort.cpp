#include <iostream>
#include <string>

/** Finds the largest item in an array.
 @pre  The size of the array is >= 1.
 @post  The arguments are unchanged.
 @param theArray  The given array.
 @param size  The number of elements in theArray.
 @return  The index of the largest entry in the array. */
template<class ItemType>
int findIndexOfLargest(const ItemType theArray[], int size);

/** Sorts the items in an array into ascending order.
 @pre  None.
 @post  The array is sorted into ascending order; the size of the array
    is unchanged.
 @param theArray  The array to sort.
 @param n  The size of theArray. */
template<class ItemType>
void selectionSort(ItemType theArray[], int n){

    // last = index of the last item in the subarray of items yet
    //        to be sorted;
    // largest = index of the largest item found
    for (int last = n - 1; last >= 1; last--)
    {
        // At this point, theArray[last+1..n-1] is sorted, and its
        // entries are greater than those in theArray[0..last].
        // Select the largest entry in theArray[0..last]
        int largest = findIndexOfLargest(theArray, last+1);

        // Swap the largest entry, theArray[largest], with
        // theArray[last]
        std::swap(theArray[largest], theArray[last]);
    }
} // end selection sort

