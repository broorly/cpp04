#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"
#include"Brain.hpp"


int main()
{
	Animal *meta[2];
	// Animal tst;
	for(int i =0; i < 2 ; i++)
	{
		if(i%2)
			meta[i] = new Dog ;
		else
			meta[i] = new Cat;
	}
	for(int i =0; i < 2 ; i++)
	{
		delete meta[i];
	}
	return 0;
}