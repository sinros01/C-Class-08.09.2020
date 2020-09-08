#include <iostream>
#include <string>


int main() {
	char option;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	char q = 'Q' or 'q';
	do {
		std::cout << "A. Save the game" << std::endl;
		std::cout << "B. restart the game" << std::endl;
		std::cout << "C. select difficulty" << std::endl;
		std::cout << "Select an option:";
		std::cin >> option;
		/*if (option == a) {
			std::cout << "Saving..." << std::endl;
		}
		else if (option == b) {
			std::cout << "restarting the game..." << std::endl;
		}
		else if (option == c) {
			std::cout << "Please select difficulty (easy/hard)" << std::endl;
		}
		else {
			std::cout << "Invalid input" << std::endl;
		} */

		switch (option) {
		case 'A': case 'a':
			std::cout << "Saving..." << std::endl;
			break;
		case 'B': case 'b':
			std::cout << "restarting the game..." << std::endl;
			break;
		case 'C': case 'c':
			std::cout << "Please select difficulty (easy/hard)" << std::endl;
			break;

		default:
			std::cout << "Invalid input" << std::endl;
			break;
		}
	} while (option != 'q' && option != 'Q');
	
}
