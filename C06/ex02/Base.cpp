#include "Base.hpp"

Base::~Base()
{
}

A::A()
{
}

A::~A()
{
}

B::B()
{
}

B::~B()
{
}

C::C()
{
}

C::~C()
{
}

Base * generate(void)
{
    std::srand(time(0));
    int ran = std::rand();
    switch (ran % 3)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
    }
    return NULL;
}

void identify(Base* p)
{
    A *a;
    B *b;
    C *c;

    a = dynamic_cast<A*> (p);
    b = dynamic_cast<B*> (p);
    c = dynamic_cast<C*> (p);
    if (a != NULL){
        std::cout << "A is the type pointed by p" << std::endl;
        return ;
    }  
    else if (b != NULL){
        std::cout << "B is the type pointed by p" << std::endl;
        return ;
    }
    else if (c != NULL){
        std::cout << "C is the type pointed by p" << std::endl;
        return ;
    }
}

void identify(Base& p)
{
    try{
        A &a = dynamic_cast<A&> (p);
        std::cout << "A is the type pointed by p" << std::endl;
        (void)a;
    }
    catch(const std::exception& e){}
    try{
        B &b = dynamic_cast<B&> (p);
        std::cout << "B is the type pointed by p" << std::endl;
        (void)b;
    }
    catch(const std::exception& e){}
    try{
        C &c = dynamic_cast<C&> (p);
        (void)c;
        std::cout << "B is the type pointed by p" << std::endl;   
    }
    catch(const std::exception& e){}
}