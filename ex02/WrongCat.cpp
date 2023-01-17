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
WrongCat::WrongCat(const WrongCat &WrongCat) {
	std::cout << "Copy constructor called" << std::endl;
	*this = WrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat& WrongCat) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = WrongCat.getType();
	return (*this);
}

std::string WrongCat :: getType() const
{
	return(this->type);
}