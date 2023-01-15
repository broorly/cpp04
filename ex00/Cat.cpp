#include"Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constuctor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
void Cat :: makeSound() const
{
	std::cout << "MEAOOO" << std::endl;
}