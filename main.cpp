#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"

int main()
{
    std::cout << "Hello World!\n";
    std::string result;
    result = box(6, 5);
    std::cout << "box(6, 5):\n";
    std::cout << result;
    std::cout << "-----------------------\n";
    std::cout << "checkerboard(8, 4):\n";
    result = checkerboard(8, 4);    
    std::cout << result;
    std::cout << "-----------------------\n";    
    std::cout << "cross(9):\n";
    result = cross(9);
    std::cout << result;
    std::cout << "-----------------------\n";

}