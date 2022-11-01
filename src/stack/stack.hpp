// typedef: Something like type alias
typedef int StackItem;

const int maxStackLength = 100;

class Stack
{
private:
    int length;
    StackItem *stack;

public:
    // constructor
    Stack();

    // destructor
    ~Stack();

    bool isFull();
    bool isEmpty();

    void push(StackItem item);
    StackItem pop();

    void print();
    int stackSize();
};
