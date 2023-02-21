#include "lower.h"
#include <cstdlib>
#include <climits>
#include <string>
#include <fstream>

std::string lower(int height) {
    std::string result;
    for (int row = 0; row < height; row++) {
        for (int col = 0; col <= row; col++) {
            result += "*";
        }
        result += "\n";
    }
    return result;
}