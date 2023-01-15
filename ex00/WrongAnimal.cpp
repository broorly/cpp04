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