#include "box.h"

//Task A for box.cpp this is the cpp file, you have to make a cpp file for Task B, "checkerboard.cpp" and a cpp file for Task C, "cross.cpp"

std::string box(int width, int height) {
	std::string shape = "";
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			shape += "*";
		}
		shape += "\n";
	}
	return shape;
}