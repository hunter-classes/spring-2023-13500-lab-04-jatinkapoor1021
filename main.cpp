#include <iostream>
#include "box.h"
#include "lower.h"
#include "upper.h"
#include "checkerboard.h"
#include "checkerboard3x3.h"
#include "trapezoid.h"
#include "cross.h"
#include <cstdlib>
#include <climits>
#include <string>
#include <fstream>

int main() {

int width, height;
// Task A: box

    std::cout << "Task A: box\n";
    std::string result = box(5, 6); 
    std::cout << "box(5, 6):\n";
    std::cout << result;
    std::cout << "-------------\n";

//Task B: checkerboard

    std::cout << "Task B: checkerboard\n";
    result = checkerboard(8, 4);
    std::cout << "checkerboard(8, 4):\n";
    std::cout << result;
    std::cout << "-----------------------\n";

//Task C: cross

    std::cout << "Task C: cross \n";
    result = cross(9);
    std::cout << "cross(9):\n";
    std::cout << result;
    std::cout << "-----------------------\n";


// Task D: lower triangle

    std::cout << "Task D: lower triangle\n";
    result = lower(4);
    std::cout << "lower(4):\n";
    std::cout << result;
    std::cout << "-------------\n";

// Task E: upper triangle

    std::cout << "Task E: upper triangle\n";
    result = upper(4);
    std::cout << "upper(4):\n";
    std::cout << result;
    std::cout << "-------------\n";



// Task F: trapezoid
    std::cout << "Task F: trapezoid \n";
    result = trapezoid(12, 5);
    std::cout << "trapezoid(12,5):\n";
    std::cout << result;
    std::cout << "-------------\n";

//Task G: checkerboard3x3
    std::cout << "Task G: checkerboard3x3 \n";
    result = checkerboard3x3(16, 11);
    std::cout << "checkerboard3x3(16, 11)\n";
    std::cout << result;
    std::cout << "-------------\n";


   

    return 0;
}




















