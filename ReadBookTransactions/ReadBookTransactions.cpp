/**
 * Assignment 3 - C++ Primer Ex: 1.20
 *
 * This program reads Sales_items from stdin and prints the transaction to stdout
 * 
 * Name: R Johnson
 */

#include "Sales_item.h"

int main() {
	// declare item
	Sales_item item;
	// count items
	int numItems = 0;

	// while input remains
	while (std::cin) {
		// increment count
		numItems++;
		// stream item information
		std::cin >> item;

		// print out the transaction
		std::cout << "Sales Item #" << numItems << ": " << item << std::endl;

		// if no input remains (prevents an extra read for EOF)
		if (std::cin.eof())
			break;
	}

	return 0;
}