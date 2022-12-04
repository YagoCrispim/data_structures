typedef int QueueItem;

const int MAX_QUEUE_SIZE = 3;

class Queue
{
private:
    int first, last;
    QueueItem *queueStructure;

public:
    Queue();
    ~Queue();

    bool isEmpty();
    bool isFull();

    void enqueue(QueueItem item);
    QueueItem dequeue();

    void print();
};
