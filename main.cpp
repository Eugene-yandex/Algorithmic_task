#include <iostream>
#include <vector>
#include <string>


int main() {
	std::vector<int> coordinats;
	coordinats.resize(6);

	for (int i = 0; i < 6; ++i) {
		std::string value;
		std::getline(std::cin,value);
		coordinats[i] = std::stoi(value);
	}

	if (coordinats[3] < coordinats[5]) {
		std::cout << 'N';
	}
	if (coordinats[1] > coordinats[5]) {
		std::cout << 'S';
	}
	if (coordinats[0] > coordinats[4]) {
		std::cout << 'W';
	}
	if (coordinats[2] < coordinats[4]) {
		std::cout << 'E';
	}

}
