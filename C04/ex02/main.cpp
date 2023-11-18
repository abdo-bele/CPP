#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // const AAnimal* j = new Dog();
    // const AAnimal* i = new Cat();

    // delete j;//should not create a leak
    // delete i;

    const AAnimal* AAnimalArray[4] = { new Dog(), new Cat(), new Dog(), new Cat() };

    AAnimalArray[0]->makeSound();
    AAnimalArray[1]->makeSound();
    AAnimalArray[2]->makeSound();
    AAnimalArray[3]->makeSound();

    for (int i = 0; i < 4; ++i)
        delete AAnimalArray[i];
    
    return 0;
}