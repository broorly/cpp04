#include"Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constuctor called" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal constuctor with paramater called" << std::endl;
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal :: makeSound() const
{
	std::cout <<"HAAAAAa" << std::endl;
}

std::string Animal :: getType() const
{
	return(this->type);
}
