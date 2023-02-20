#include "upper.h"
#include <string>

std::string upper(int height) {
    std::string result;
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < height - row; col++) {
            result += "*";
        }
        result += "\n";
    }
    return result;
}