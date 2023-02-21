#include <iostream>
#include "box.h"
#include "lower.h"
#include "upper.h"
#include "checkerboard.h"
#include "cross.h"
#include <cstdlib>
#include <climits>
#include <string>
#include <fstream>

int main() {
    

    // Task A: box
    std::cout << "Task A: box (7, 4)\n";
    std::string result = box(7, 4);
    std::cout << result;
    std::cout << "-------------\n";

    //Task B: checkerboard

    std::cout << "Task B: checkerboard(11, 6):\n";

    result = checkerboard(11, 6);

    std::cout << result;

    std::cout << "-----------------------\n";
    
    
    //Task C: cross

    std::cout << "Task C: cross(8):\n";

    result = cross(8);

    std::cout << result;

    std::cout << "-----------------------\n";


    // Task D: lower triangle
    std::cout << "Task D: lower triangle\n";
    result = lower(6);
    std::cout << "lower(6):\n";
    std::cout << result;
    std::cout << "-------------\n";

    // Task E: upper triangle
    std::cout << "Task E: upper triangle\n";
    result = upper(5);
    std::cout << "upper(5):\n";
    std::cout << result;
    std::cout << "-------------\n";


    //Task F: trapezoid function goes here


    //Task G: checkerboard 3x3 function goes here

   

    return 0;
}




















