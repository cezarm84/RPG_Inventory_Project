// RPG_Inventory_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "Player.hpp"
#include <iostream>

int main() {
    Player player;
    int choice = 0;

    while (choice != 5) {
        std::cout << "\nMenu:\n"
            << "1. Add item to inventory\n"
            << "2. Display inventory\n"
            << "3. Use an item\n"
            << "4. Remove an item\n"
            << "5. Exit\n"
            << "Choose an option: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int itemType;
            std::cout << "Select item type: 1. Weapon, 2. Armor, 3. Potion: ";
            std::cin >> itemType;

            if (itemType == 1) {
                player.addItem(new Weapon("Sword", 5, 50, 1.5));
            }
            else if (itemType == 2) {
                player.addItem(new Armor("Steel Armor", 15, 30));
            }
            else if (itemType == 3) {
                player.addItem(new Potion("Healing Potion", 1, 20));
            }
            break;
        }
        case 2: {
            player.displayInventory();
            break;
        }
        case 3: {
            int index;
            std::cout << "Enter the index of the item to use: ";
            std::cin >> index;
            player.useItem(index - 1);
            break;
        }
        case 4: {
            int index;
            std::cout << "Enter the index of the item to remove: ";
            std::cin >> index;
            player.removeItem(index - 1);
            break;
        }
        case 5: {
            std::cout << "Exiting program..." << std::endl;
            break;
        }
        default: {
            std::cout << "Invalid option!" << std::endl;
            break;
        }
        }
    }

    return 0;
}
