#include "Player.hpp"
#include <iostream>

// Destructor implementation to free heap memory
Player::~Player() {
    for (Item* item : inventory) {
        delete item; // Deallocates dynamically allocated memory
    }
}

// Function to add items to the inventory
void Player::addItem(Item* item) {
    inventory.push_back(item);
    std::cout << "Item added to inventory: " << std::endl;
    item->display();
}

// Function to display the items in the inventory
void Player::displayInventory() const {
    std::cout << "Inventory: " << std::endl;
    for (size_t i = 0; i < inventory.size(); ++i) {
        std::cout << i + 1 << ". ";
        inventory[i]->display(); // Calls the appropriate display method
    }
}

// Function to use an item from the inventory
void Player::useItem(int index) {
    if (index >= 0 && index < static_cast<int>(inventory.size())) {
        inventory[index]->use(); // Calls the appropriate use method
    }
    else {
        std::cout << "Invalid item index!" << std::endl;
    }
}

// Function to remove an item from the inventory
void Player::removeItem(int index) {
    if (index >= 0 && index < static_cast<int>(inventory.size())) {
        delete inventory[index]; // Free the memory for the item
        inventory.erase(inventory.begin() + index); // Remove the pointer from the vector
        std::cout << "Item removed from inventory." << std::endl;
    }
    else {
        std::cout << "Invalid item index!" << std::endl;
    }
}
