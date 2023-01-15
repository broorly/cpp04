#include"Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constuctor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
void Dog :: makeSound() const
{
	std::cout << "WOOF WOOF" << std::endl;
}