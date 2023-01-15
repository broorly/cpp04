#pragma once
#include"Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	~Dog();
	void makeSound() const;
};
