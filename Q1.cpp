#include <iostream>

struct Item {
    int id;
    float cost;
};

int main() {
    Item inventory[6] = {
        {101, 75.50f},
        {102, 35.00f},
        {103, 90.25f},
        {104, 50.00f}
    };
    
    std::cout << "Items with cost greater than 50.00:" << std::endl;
    for (int i = 0; i < 6; ++i) {
        if (inventory[i].cost > 50.00f) {
            std::cout << "ID: " << inventory[i].id << ", Cost: " << inventory[i].cost << std::endl;
        }
    }
    
    return 0;
}
