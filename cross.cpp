#include "cross.h"
#include <cstdlib>
#include <climits>
#include <string>
#include <fstream>

std::string cross(int size) {
    std::string shape = "";
    
    int counter = 0;
    
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