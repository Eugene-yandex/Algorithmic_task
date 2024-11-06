#include <iostream>
#include <vector>
#include <string>
#include <bitset>

enum class ANSER {
	N = 0b1000,
	S = 0b0100,
	W = 0b0010,
	E = 0b0001,
	NW = 0b1010,
	NE = 0b1001,
	SW = 0b0110,
	SE = 0b0101
};

int main() {
	std::vector<int> coordinats;
	coordinats.resize(6);

	for (int i = 0; i < 6; ++i) {
		std::string value;
		std::getline(std::cin,value);
		coordinats[i] = std::stoi(value);
	}

	bool itog[4]{ false };
	if (coordinats[3] < coordinats[5]) {
		itog[0] = true;
	}
	if (coordinats[1] > coordinats[5]) {
		itog[1] = true;
	}
	if (coordinats[0] > coordinats[4]) {
		itog[2] = true;
	}
	if (coordinats[2] < coordinats[4]) {
		itog[3] = true;
	}
	std::bitset<8> bit;
	for (int i = 3; i >= 0; --i) {
		bit.set(i, itog[3-i]);
	}
	ANSER res = static_cast<ANSER>(bit.to_ulong());
	switch (res) {
	case ANSER::E:
		std::cout << 'E';
		break;
	case ANSER::N:
		std::cout << 'N';
		break;	
	case ANSER::NE:
		std::cout << "NE";
			break;
	case ANSER::NW:
		std::cout << "NW";
		break;
	case ANSER::S:
		std::cout << 'S';
		break;
	case ANSER::SE:
		std::cout << "SE";
		break;
	case ANSER::SW:
		std::cout << "SW";
		break;
	case ANSER::W:
		std::cout << 'W';
		break;

	default:
		break;
	}

}
