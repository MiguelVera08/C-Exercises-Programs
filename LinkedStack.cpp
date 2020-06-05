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

        // Point to last node in new chain
        Node<ItemType>* newChainPtr = topPtr;

        // Advance original-chain pointer
        origChainPtr = origChainPtr->getNext();

        // Copy remaining nodes
        while (origChainPtr != nullptr){

            // Get next item from original chain
            ItemType nextItem = origChainPtr->getItem();

            // Create a new node containing the next item
            Node<ItemType>* newNodePtr = new Node<ItemType>(nextItem);

            // Link new node to end of new chain
            newChainPtr->setNext(newNodePtr);

            // Advance pointer to new last node
            newChainPtr = newChainPtr->getNext();

            // Advance original-chain pointer
            origChainPtr = origChainPtr->getNext();
        }
        newChainPtr->setNext(nullptr);           // Flag end of chain
    }
}

template<class ItemType>
LinkedStack<ItemType>::~LinkedStack()
{
    // Pop until stack is empty
    while (!isEmpty())
        pop();
}  // end destructor
