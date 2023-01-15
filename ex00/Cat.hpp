#pragma once
#include"Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat();
	~Cat();
	void makeSound() const;
};

