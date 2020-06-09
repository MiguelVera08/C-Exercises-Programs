#ifndef STACK_INTERFACE_
#define STACK_INTERFACE_

template<class ItemType>
class StackInterface{

public:
    /** Sees whether this stack is empty.
     @return True if the stack is empty, or false if not. */
    virtual bool isEmpty() const = 0;
};
