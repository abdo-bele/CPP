#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int i)
{
    this->size = i;
}

Span::Span(const Span &other)
{
    std::cout << "hello\n";
    if (this != &other)
        *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->size = other.size;
        for (unsigned int i = 0; i < other.array.size(); i++) {
            this->array[i] = other.array[i];
        }
    }
    return *this;
}

Span::~Span()
{
}

void    Span::addNumber(int a)
{
    if (array.size() < this->size)
        array.push_back(a);
    else
        throw std::runtime_error("size is full");
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    int a = std::distance(begin , end);
    if (a + array.size() > this->size)
        throw std::runtime_error("argument size to large");
    array.insert(array.end(), begin, end);
}

int     Span::shortestSpan()
{
    int a = std::numeric_limits<int>::max();
    for (std::vector<int>::iterator i = array.begin(); i < array.end(); i++)
    {
        for (std::vector<int>::iterator b = i + 1; b < array.end(); b++)
        {
            if (abs(*i - *b) < a)
                a = abs(*i - *b);
        }
    }
    return a;
}

int     Span::longestSpan()
{
    std::vector<int>::iterator max_value = std::max_element(array.begin(), array.end());
    std::vector<int>::iterator min_value = std::min_element(array.begin(), array.end());
    return *max_value - *min_value;
}
