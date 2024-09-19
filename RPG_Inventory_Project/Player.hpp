#ifndef PLAYER_H
#define PLAYER_H

#include "Item.hpp"
#include <vector>

class Player {
private:
    std::vector<Item*> inventory; // Declaring member variable to store items

public:
    ~Player(); // Destructor declaration
    void addItem(Item* item);     // Function declaration to add items
    void displayInventory() const; // Function declaration to display inventory
    void useItem(int index);       // Function declaration to use an item
    void removeItem(int index);    // Function declaration to remove an item
};

#endif // PLAYER_H
