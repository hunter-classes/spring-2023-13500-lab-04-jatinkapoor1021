#include "box.h"
#include <cstdlib>
#include <climits>
#include <string>
#include <fstream>



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