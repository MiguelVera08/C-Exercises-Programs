#ifndef NODE_
#define NODE_

template<class ItemType>
class Node{

private:
    ItemType        item; // A data item
    Node<ItemType>* next; // Pointer to next node

};
