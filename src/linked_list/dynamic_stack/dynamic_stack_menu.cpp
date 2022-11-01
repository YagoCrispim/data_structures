#include <iostream>

#include "dynamic_stack.hpp"
#include "dynamic_stack_menu.hpp"

using namespace std;

void DynamicStackMenu::show()
{
    DynamicStack stack1;
    DSItem item;
    int option;

    cout << "\n";
    cout << "Dynamic Stack generator\n";

    do
    {
        cout << "\n";
        cout << "1 - Insert element.\n";
        cout << "2 - Remove element.\n";
        cout << "3 - Print stack.\n";
        cout << "0 - Stop program.\n";

        cin >> option;

        if (option == 1) {
            cout << "Write element to insert: \n";
            cin >> item;
            stack1.push(item);
        } else if (option == 2) {
            item = stack1.pop();
            cout << "Removed element: " << item << endl;
        } else if (option == 3) {
            stack1.print();
        } else if (option == 0) {
            exit(0);
        } else {
            cout << "Invalid option!\n";
        }
    } while (option != 0);
}
