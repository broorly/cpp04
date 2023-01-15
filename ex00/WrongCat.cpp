#include"WrongCat.hpp"
WrongCat::WrongCat()
{
	std::cout<<"WrongCart constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout<<"WrongCart desructor called" << std::endl;
}

void WrongCat :: makeSound() const{
	std::cout << "NOT A CAT" << std::endl;
}