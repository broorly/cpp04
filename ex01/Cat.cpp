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
Cat::Cat(const Cat &Cat) {
	std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat &Cat::operator=(const Cat& Cat) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = Cat.getType();
	return (*this);
}