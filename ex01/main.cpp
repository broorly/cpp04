#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"
#include"Brain.hpp"


int main()
{
	Animal *meta[10];
	for(int i =0; i < 10 ; i++)
	{
		if(i%2)
			meta[i] = new Dog ;
		else
			meta[i] = new Cat;
	}
	for(int i =0; i < 10 ; i++)
	{
		delete meta[i];
	}
	system("leaks Animal");
	while (1);
	
	return 0;
}