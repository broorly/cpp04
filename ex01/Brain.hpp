#pragma once
#include<string>
#include<iostream>
#include"Dog.hpp"
#include"Cat.hpp"

class Brain : public Dog , public Cat
{
protected:
	std:: string ideas[100];
public:
	Brain(std::string ideas);
	Brain(/* args */);
	~Brain();
	Brain(const Brain &Brain);
  	Brain &operator=(const Brain& Brain);
	std :: string get_ideas() const;
};

