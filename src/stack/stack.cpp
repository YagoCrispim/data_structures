#include <iostream>
#include "stack.hpp"

using namespace std;

Stack::Stack()
{
    length = 0;
    stack = new StackItem[maxStackLength];
}

Stack::~Stack()
{
    delete[] stack;
}

bool Stack::isFull()
{
    return (length == maxStackLength);
}

bool Stack::isEmpty()
{
    return (length == 0);
}

void Stack::push(StackItem item)
{
    if (isFull())
    {
        cout << "The stack is full.";
        cout << "Is not possible to insert this element.\n";
        return;
    }

    stack[length] = item;
    length++;
}

StackItem Stack::pop()
{
    if (isEmpty())
    {
        cout << "The stack is empty. There's no elements to remove.\n";
        return 0;
    }

    length--;
    return stack[length - 1];
}

void Stack::print()
{
    cout << "Stack [ ";

    for (int i = 0; i < length; i++)
    {
        cout << stack[i] << " ";
    }

    cout << "]\n";
}

int Stack::stackSize()
{
    return length;
}
