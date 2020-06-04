#include <cassert>        // For assert
#include "LinkedStack.h"  // Header file

template<class ItemType>
LinkedStack<ItemType>::LinkedStack() : topPtr(nullptr)
{
}  // end default constructor

template<class ItemType>
LinkedStack<ItemType>::LinkedStack(const LinkedStack<ItemType>& aStack){


    // Point to nodes in original chain
    Node<ItemType>* origChainPtr = aStack.topPtr;

    if (origChainPtr == nullptr) {
        topPtr = nullptr;  // Original stack is empty
    }else{
        // Copy first node
        topPtr = new Node<ItemType>();
        topPtr->setItem(origChainPtr->getItem());
    }

}
