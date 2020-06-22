

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

        // At this point, theArray[first..unsorted-1] is sorted.
        // Find the right position (loc) in theArray[first..unsorted]
        // for theArray[unsorted], which is the first entry in the
        // unsorted region; shift, if necessary, to make room
        ItemType nextItem = theArray[unsorted];
        int loc = unsorted;
        while ((loc > first) && (theArray[loc - 1] > nextItem))
        {
            // Shift theArray[loc - 1] to the right
            theArray[loc] = theArray[loc - 1];
            loc--;
        }
        // At this point, theArray[loc] is where nextItem belongs
        theArray[loc] = nextItem; // Insert nextItem into sorted region
    }
}

/** Arranges two specified array entries into sorted order by
 exchanging them, if necessary.
 @param theArray  The given array.
 @param i  The index of the first entry to consider in theArray.
 @param j  The index of the second entry to consider in theArray. */
template<class ItemType>
void order(ItemType theArray[], int i, int j)
{
    if (theArray[i] > theArray[j])
        std::swap(theArray[i], theArray[j]); // Exchange entries
}  // end order

/** Arranges the first, middle, and last entry in an array in sorted order.
 @pre  theArray[first..last] is an array; first <= last.
 @post  theArray[first..last] is is arranged so that its
 first, middle, and last entries are in sorted order.
 @param theArray  The given array.
 @param first  The first entry to consider in theArray.
 @param last  The last entry to consider in theArray.
 @return  The index of the middle entry. */
template<class ItemType>
int sortFirstMiddleLast(ItemType theArray[], int first, int last)
{
    int mid = first + (last - first) / 2;
    order(theArray, first, mid); // Make theArray[first] <= theArray[mid]
    order(theArray, mid, last);  // Make theArray[mid] <= theArray[last]
    order(theArray, first, mid); // Make theArray[first] <= theArray[mid]

    return mid;
}  // end sortFirstMiddleLast