#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename k> 
void    iter(T *aray, size_t len, void (*fun)(k &))
{
    size_t i = 0;

    while (i < len)
    {
        fun(aray[i]);
        i++;
    }
}

#endif