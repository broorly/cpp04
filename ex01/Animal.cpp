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
Animal::Animal(const Animal &Animal) {
	std::cout << "Copy constructor called" << std::endl;
	*this = Animal;
}

Animal &Animal::operator=(const Animal& Animal) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = Animal.getType();
	return (*this);
}