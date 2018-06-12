#include <iostream>
#include "factorial.hpp"

int main(int ac, char **av)
{
	std::cout << factorial(std::stoi(av[1])) << std::endl;
	return (0);
}
