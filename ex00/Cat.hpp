#pragma once
#include"Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat();
	~Cat();
	Cat(const Cat &Cat);
  	Cat &operator=(const Cat& Cat);
	
	void makeSound() const;
};

