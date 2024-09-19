#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
protected:
    std::string name;
    int weight;

public:
    Item(std::string name, int weight) : name(name), weight(weight) {}

    virtual void use() = 0; // Pure virtual function
    virtual ~Item() {} // Virtual destructor
    virtual void display() const;
};

// Weapon class
class Weapon : public Item {
private:
    int damage;
    double range;

public:
    Weapon(std::string name, int weight, int damage, double range)
        : Item(name, weight), damage(damage), range(range) {}

    void use() override;
    void display() const override;
};

// Armor class
class Armor : public Item {
private:
    int defense;

public:
    Armor(std::string name, int weight, int defense)
        : Item(name, weight), defense(defense) {}

    void use() override;
    void display() const override;
};

// Potion class
class Potion : public Item {
private:
    int healingAmount;

public:
    Potion(std::string name, int weight, int healingAmount)
        : Item(name, weight), healingAmount(healingAmount) {}

    void use() override;
    void display() const override;
};

#endif // ITEM_H
