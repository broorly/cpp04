#pragma once
#include"Animal.hpp"
#include"Brain.hpp"

class Brain;
class Dog : public Animal 
{
private:
	Brain *brain;
public:
	Dog(/* args */);
	~Dog();
	Dog(const Dog &Dog);
  	Dog &operator=(const Dog& Dog);
	void makeSound() const;
};
