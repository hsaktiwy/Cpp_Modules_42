#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const Dog* k = new Dog();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout <<  k->getType() <<" " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
k->makeSound();
// ..
delete i;
delete j;
delete meta;
delete k;

const WrongAnimal* wmeta = new WrongAnimal();
const WrongAnimal* wi = new WrongCat();
const WrongCat* wk = new WrongCat();
std::cout << wi->getType() << " " << std::endl;
std::cout << wk->getType() << " " << std::endl;
wi->makeSound(); //will output the cat sound!
wmeta->makeSound();
wk->makeSound();
// ..
delete wi;
delete wmeta;
delete wk;

return 0;
}
