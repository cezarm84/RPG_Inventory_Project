#include "Item.hpp"
#include <iostream>

// Item class
void Item::display() const {
    std::cout << "Name: " << name << ", Weight: " << weight << std::endl;
}

// Weapon class
void Weapon::use() {
    std::cout << "Using weapon: " << name << ". It deals " << damage << " damage!" << std::endl;
}

void Weapon::display() const {
    Item::display();
    std::cout << "Damage: " << damage << ", Range: " << range << std::endl;
}

// Armor class
void Armor::use() {
    std::cout << "Equipping armor: " << name << ". It provides " << defense << " defense." << std::endl;
}

void Armor::display() const {
    Item::display();
    std::cout << "Defense: " << defense << std::endl;
}

// Potion class
void Potion::use() {
    std::cout << "Drinking potion: " << name << ". It heals " << healingAmount << " HP." << std::endl;
}

void Potion::display() const {
    Item::display();
    std::cout << "Healing Amount: " << healingAmount << std::endl;
}
