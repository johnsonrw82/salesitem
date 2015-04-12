/**
* Assignment 3 - C++ Primer Ex: 1.21
*
* This program reads a pair of Sales_items from stdin and if the ISBN numbers
* are the same, produces their sum and prints the transaction to stdout.
*
* Name: R Johnson
*/

#include "Sales_item.h"

int main() {
	// pair of sales items
	Sales_item item1, item2;

	// while input remains
	while (std::cin) {
		// read in from stdin
		std::cin >> item1 >> item2;

		// compare isbn numbers (strings)
		if (item1.isbn() == item2.isbn() ) {
			// print out the sum
			std::cout << "Sum of ISBN#: " << item1.isbn() << " = " << item1 + item2 << std::endl;
		}
		// items do not have the same isbn
		else {
			std::string item1Isbn = item1.isbn().empty() ? "Not Defined" : item1.isbn();
			std::string item2Isbn = item2.isbn().empty() ? "Not Defined" : item2.isbn();

			std::cout << "Item 1 (ISBN " << item1Isbn << ") and Item 2 (ISBN " << item2Isbn 
				<< ") do not have the same ISBN." << std::endl;
		}

		// no input remains (prevents an extra read for EOF)
		if (std::cin.eof())
			break;
	}

	return 0;
}