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
	void makeSound()const;
};

