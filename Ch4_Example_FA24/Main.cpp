#include <iostream>

int main()
{
	int age;
	std::cin >> age;

	std::cout << "You inputed: " << age << "\nNow input a char then an int.\n";

	char ch;
	int i;

	std::cin >> ch >> i;

	std::cout << "You entered " << ch << " and " << i << std::endl;
}