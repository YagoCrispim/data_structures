#include <iostream>
#include "dynamic_stack.hpp"
#include <cstddef> // allow use of NULL

using namespace std;

/**
 * @brief Construct a new Dynamic Stack:: Dynamic Stack object.
 * Creates top node and set as NULL
 */
DynamicStack::DynamicStack()
{
    topNode = NULL;
}

/**
 * @brief Destroy the Dynamic Stack:: Dynamic Stack object
 */
DynamicStack::~DynamicStack()
{
    Node *tempNode;

    while (topNode != NULL)
    {
        tempNode = topNode;
        topNode = topNode->nextNode;

        delete tempNode;
    }
}

bool DynamicStack::isEmpty()
{
    return (topNode == NULL);
}

/**
 * @brief Tries to create new node and if success the stack isn't full
 * @return true / false
 */
bool DynamicStack::isFull()
{
    Node *newNode;

    try
    {
        newNode = new Node;
        delete newNode;

        return false;
    }
    catch (bad_alloc exception)
    {
        return true;
    }
}

void DynamicStack::push(DSItem item)
{
    if (isFull())
    {
        cout << "The stack is full.\n";
        cout << "Can't insert this element.";
    }
    else
    {
        // Creates the new node and set value inside struct
        Node *newNode = new Node;
        newNode->value = item;
        newNode->nextNode = topNode;

        // Reset top node as newNode.
        topNode = newNode;
    }
}

DSItem DynamicStack::pop()
{
    if (isEmpty())
    {
        cout << "The stack is empty.";
        return 0;
    }

    Node *tempNode;
    tempNode = topNode;

    DSItem tempItem = topNode->value;
    topNode = topNode->nextNode;
    delete tempNode;

    return tempItem;
}

void DynamicStack::print()
{
    Node* tempNode = topNode;

    cout << "Stack: [ ";

    while (tempNode != NULL)
    {
        cout << tempNode->value << " ";
        tempNode = tempNode->nextNode;
    }

    cout << "]\n";
}
