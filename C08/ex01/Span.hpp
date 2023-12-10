#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int size;
        std::vector<int> array;
    public:
        Span(unsigned int);
        Span();
        Span(const Span &other);
        Span &operator=(const Span &);
        ~Span();

    public:
        void    addNumber(int a);
        int     shortestSpan();
        int     longestSpan();
        void    addNumber(std::vector<int>::iterator bigen, std::vector<int>::iterator end);
};



#endif