#include <iostream>

#include "queue_menu.hpp"
#include "queue.hpp"

using namespace std;

void QueueMenu::show() {
    int option;
    
    Queue queue1;
    QueueItem item;

    cout << "Queue generator\n";

    do {
        cout << "1 - Enqueue element\n";
        cout << "2 - Dequeue element\n";
        cout << "3 - Print queue\n";
        cout << "\n0 - Stop program\n";
        cout << "Option: ";

        cin >> option;

        if (option == 1) {
            cout << "\nElement to enqueue: ";
            cin >> item;
            queue1.enqueue(item);
        } else if (option == 2) {
            item = queue1.dequeue();
            cout << "\nRemoved element: " << item << endl;
            queue1.print();
        } else if (option == 3) {
            queue1.print();
        } else if (option == 0) {
            exit(0);
        } else {
            cout << "\nInvalid option!\n";
        }
    } while (option != 0);
}
