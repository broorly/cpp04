#pragma once
#include"WrongAnimal.hpp"
#include<iostream>
class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	void makeSound() const;
	WrongCat(const WrongCat &WrongCat);
  	WrongCat &operator=(const WrongCat& WrongCat);
	std::string getType()const;
};

