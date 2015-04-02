#include "Sales_item.h"

int main() {
	Sales_item item;
	int numItems = 0;

	while (std::cin) {
		numItems++;
		std::cin >> item;

		std::cout << "Sales Item #" << numItems << ": " << item << std::endl;

		if (std::cin.eof())
			break;
	}

}