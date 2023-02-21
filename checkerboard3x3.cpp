#include "checkerboard3x3.h"
#include <string>

std::string checkerboard3x3(int width, int height) {
    std::string shape = "";
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if ((i / 3) % 2 == 0) {
                if ((j / 3) % 2 == 0) {
                    shape += "*";
                } else {
                    shape += " ";
                }
            } else {
                if ((j / 3) % 2 == 0) {
                    shape += " ";
                } else {
                    shape += "*";
                }
            }
        }
        shape += "\n";
    }
    
    return shape;
}