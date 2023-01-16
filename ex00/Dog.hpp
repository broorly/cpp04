#pragma once
#include"Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	~Dog();
	Dog(const Dog &Dog);
  	Dog &operator=(const Dog& Dog);
	void makeSound() const;
};
