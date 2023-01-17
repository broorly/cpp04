#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout<<"WrongAnimal consturctor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<"WrongAnimal destructor called" << std::endl;
}

void WrongAnimal ::makeSound() const
{
	std::cout<<"NOT ANIMAL" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) {
	std::cout << "Copy constructor called" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& WrongAnimal) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = WrongAnimal.getType();
	return (*this);
}

std::string WrongAnimal :: getType() const
{
	return(this->type);
}