#include "trapezoid.h"
#include <string>

std::string trapezoid(int width, int height) {
    std::string shape = "";
    int base = width - (height - 1) * 2;
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            shape += " ";
        }
        for (int k = 0; k < base + 2 * (height - i - 1); k++) {
            shape += "*";
        }
        shape += "\n";
    }
    
    return shape;
}