typedef int DSItem;

const int MAX_QUEUE_SIZE = 3;

struct Node
{
    DSItem value;
    /**
     *
     * When it comes to stack, the next node is the bottom node.
     *
     * STACK
     *
     *          -----
     *  topNode | 1 |
     *          -----
     * nextNode | 2 |
     *          -----
     *          | 3 |
     *          -----
     *          | 4 |
     *          -----
     */
    Node *nextNode;
};

class DynamicStack
{
private:
    Node *topNode;

public:
    DynamicStack();
    ~DynamicStack();

    bool isEmpty();
    bool isFull();

    void push(DSItem item);
    DSItem pop();

    void print();
};
