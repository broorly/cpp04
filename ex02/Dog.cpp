#include"Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain;
	std::cout << "Dog constuctor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}
void Dog :: makeSound() const
{
	std::cout << "WOOF WOOF" << std::endl;
}
Dog::Dog(const Dog &Dog) {
	std::cout << "Copy constructor called" << std::endl;
	*this = Dog;
}

Dog &Dog::operator=(const Dog& Dog) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = Dog.getType();
	return (*this);
}