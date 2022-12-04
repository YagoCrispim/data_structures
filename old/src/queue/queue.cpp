#include <iostream>

#include "queue.hpp"

using namespace std;

Queue::Queue()
{
    first = 0;
    last = 0;
    queueStructure = new QueueItem[MAX_QUEUE_SIZE];
}

Queue::~Queue()
{
    delete[] queueStructure;
}

// if last element is equal to first element, then queue is empty
bool Queue::isEmpty()
{
    return last == first;
}

// if the difference between the last and first elements is equal MAX_QUEUE_SIZE
bool Queue::isFull()
{
    return last - first == MAX_QUEUE_SIZE;
}

// check if queue is fulll
void Queue::enqueue(QueueItem item)
{
    if (isFull())
    {
        cout << "\nThe queue is full.";
        return;
    }

    // element will be inserted in idx. The idx is the rest between the last and MAX_QUEUE_SIZE
    queueStructure[last % MAX_QUEUE_SIZE] = item;
    last++;
}

// the queue needs to be empty before dequeue
QueueItem Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "\nThe queue is empty.";
        return 0;
    }

    first++;
    return queueStructure[(first - 1) % MAX_QUEUE_SIZE];
}

//
void Queue::print()
{
    cout << "\nQueue: [ ";

    for (int i = first; i < last; i++)
    {
        cout << queueStructure[i];
        cout << " ";
    }

    cout << "]\n";
}
