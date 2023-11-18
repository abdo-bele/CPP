#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    const Animal* AnimalArray[4] = { new Dog(), new Cat(), new Dog(), new Cat() };

    for (int i = 0; i < 4; ++i)
        delete AnimalArray[i];
    
    return 0;
}