#include <iostream>
struct colour{
int red;
int blue;
int green;
};
int main() {
  colour palette[5] = {
{22,0,0},
{0,22,0},
{0,0,22},
{22,22,22},
{0,0,0},
};

    for (int i = 0; i < 3; ++i) {
        palette[i].red = 22 - palette[i].red;
        palette[i].green = 22 - palette[i].green;
        palette[i].blue = 22 - palette[i].blue;
    }
    
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": "
                  << "R=" << palette[i].red
                  << ", G=" << palette[i].green
                  << ", B=" << palette[i].blue << std::endl;
    }

    return 0;
}
