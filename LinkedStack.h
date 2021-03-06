#include "StackInterface.h"
#include "Node.h"


template<class ItemType>
class LinkedStack : public StackInterface<ItemType>
{
private:
    Node<ItemType>* topPtr; // Pointer to first node in the chain;
    // this node contains the stack's top
public:
    // Constructors and destructor:
    LinkedStack();                                   // Default constructor
    LinkedStack(const LinkedStack<ItemType>& aStack);// Copy constructor
    virtual ~LinkedStack();

    // Stack operations:
    bool isEmpty() const;
    bool push(const ItemType& newItem);
    bool pop();
    ItemType peek() const;
};

#include "LinkedStack.cpp"
#endif