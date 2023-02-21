#include "checkerboard.h"
#include <cstdlib>
#include <climits>
#include <string>
#include <fstream>
//Task B for checkerboard.cpp this is the cpp file
std::string checkerboard(int width, int height) {
	std::string shape = "";		
    std::string firstChar = "";
    std::string secondChar = "";
    // loop to print the characters
    for (int row = 0; row < height; row++) {
        firstChar = " ";
        secondChar = "*";
        if (row % 2 == 0) {
            firstChar = '*';
            secondChar = ' ';
        }
        for (int col = 0; col < width; col++) {
            if (col % 2 == 0) {                
                shape += firstChar;
            }
            else {                
                shape += secondChar;
            }
        }        
        shape += "\n";
    }    
	return shape;
}