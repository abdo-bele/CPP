#include "Serializer.hpp"

int main()
{
    Data a;

    a.a = 155;
    a.b = 'a';

    Data *b = Serializer::deserialize(Serializer::serialize(&a));

    std::cout << "Data (int a) = " << b->a << " Data (char b) = " << b->b << std::endl;

    uintptr_t raw = Serializer::serialize(b);

    b->a = 150;
    b->b = 'l';

    Data f = *(Serializer::deserialize(raw));

    std::cout << "Data (int a) = " << f.a << " Data (char b) = " << f.b << std::endl;
}