
#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &Animal);
  		Animal &operator=(const Animal& Animal);
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
};

