#include"Brain.hpp"

Brain::Brain(/* args */)
{
}
Brain::~Brain()
{
}

Brain::Brain(const Brain &Brain) {
	std::cout << "Copy constructor called" << std::endl;
	*this = Brain;
}

Brain &Brain::operator=(const Brain& Brain) {
	std::cout << "Copy assignment operator called" << std::endl;
	for(int i =0; i > 100 ; i++)
	{
		this->ideas[i].assign(Brain.ideas[i]);
	}
	return (*this);
}