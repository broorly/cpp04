#pragma once
#include"Animal.hpp"
#include"Brain.hpp"

class Brain;

class Cat : public Animal 
{
private:
	Brain *brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &Cat);
  	Cat &operator=(const Cat& Cat);
	
	void makeSound() const;
};

