#include <iostream>
#include <string>

int main() {
	char option;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	do {
		std::cout << "A. Save the game" << std::endl;
		std::cout << "B. restart the game" << std::endl;
		std::cout << "C. select difficulty" << std::endl;
		std::cout << "Select an option:";
		std::cin >> option;
		if (option == a) {
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
		}
	} while (true);
}