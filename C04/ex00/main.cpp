#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
void fun()
{
    system("leaks Animal");
}

int main()
{
    // atexit(fun);
    const Animal* meta = new Animal();
    const Animal* j = new Dog("dog");
    const Animal* i = new Cat("cat");
    const WrongAnimal *a = new WrongCat("cat");
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << a->getType() << " " << std::endl;
    a->makeSound();
    delete meta;
    delete j;
    delete i;
    delete a;
    return 0;
}