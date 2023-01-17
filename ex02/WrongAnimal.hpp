#pragma once
#include<iostream>
#include<string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(/* args */);
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &WrongAnimal);
  	WrongAnimal &operator=(const WrongAnimal& WrongAnimal);
	void makeSound()const;
	std::string getType()const;

};

