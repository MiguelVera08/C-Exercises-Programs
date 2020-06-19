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