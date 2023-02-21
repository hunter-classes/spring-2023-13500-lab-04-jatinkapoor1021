#include "cross.h"
#include <cstdlib>
#include <climits>
#include <string>
#include <fstream>
//Task C for cross.cpp this is the cpp file
std::string cross(int size) {
    std::string shape = "";
    //std::string line = "";
    int counter = 0;
    // Loop to print the pattern
    for (int i = 0; i < size; i++) {        
        for (int i = 0; i < size; i++) {
            if ((i == counter) || (i == (size -1 )- counter)) {                
                shape += "*";
            }
            else {                
                shape += " ";
            }
        }
        shape += "\n";
        counter += 1;
    }        
    return shape;
}