#include <iostream>

#include "stack_menu.hpp"
#include "stack.hpp"

using namespace std;

void StackMenu::show() {
    Stack stack1;
    StackItem item;
    int option;

    cout << "\nStack generator\n";

    do
    {
        cout << "1 - Insert element.\n";
        cout << "2 - Remove element.\n";
        cout << "3 - Print stack.\n";
        cout << "4 - Print stack length.\n";
        cout << "\n0 - Stop program.\n";

        cin >> option;

        if (option == 1)
        {
            cout << "Write element to insert: \n";
            cin >> item;

            stack1.push(item);
        }
        else if (option == 2)
        {
            item = stack1.pop();

            cout << "Removed element: " << item << endl;
        }
        else if (option == 3)
        {
            stack1.print();
        }
        else if (option == 4)
        {
            stack1.stackSize();
        } else if (option == 0) {
            exit(0);
        } else {
            cout << "Invalid option!\n";
        }
    } while (option != 0);
}
