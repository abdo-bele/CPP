#include "Span.hpp"

int main()
{
    try
    {

        std::vector<int> a;

        a.push_back(5);
        a.push_back(8);
        a.push_back(7);

        Span sp = Span(8);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}