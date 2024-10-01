#include <iostream>
#include <string>

int main()
{
	int age;
	std::cin >> age;

	std::cout << "You inputed: " << age << "\nNow input a char then an int.\n";

	char ch;
	int i;

	std::cin >> ch >> i;

	std::cout << "You entered " << ch << " and " << i << std::endl;

	std::string first, last, name;

	std::cout << "Enter your first and last name: ";
	std::cin >> first >> last;
	std::cout << "Your name is " << first << " " << last << std::endl;
	
	std::cout << "Enter your full name: ";
	std::getline(std::cin, name);
	std::cout << "Your name is " << name << std::endl;
}