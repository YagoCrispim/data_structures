#include <iostream>
#include "menu.hpp"

#include "../stack/stack_menu.hpp"
#include "../queue/queue_menu.hpp"
#include "../linked_list/dynamic_stack/dynamic_stack_menu.hpp"

using namespace std;

void Menu::show() {
    int option;

    StackMenu stackMenu;
    QueueMenu queueMenu;
    DynamicStackMenu dynamicStackMenu;

    cout << "\nWich datastructure would you like to run?\n";

    do {
        cout << "1 - Stack\n";
        cout << "2 - Queue\n";
        cout << "3 - Dynamic Stack\n";
        cout << "0 - Exit\n";
        cin >> option;

        if (option == 1)
        {
            stackMenu.show();
        }
        else if (option == 2)
        {
            queueMenu.show();
        } else if (option == 3)
        {
            dynamicStackMenu.show();
        } else if (option == 0)
        {
            cout << "Goodbye!\n";
            exit(0);
        } else {
            cout << "\nInvalid option!\n";
        }
    } while (option != 0);
}
