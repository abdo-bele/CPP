#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <iostream>
#include <stack>
#include <deque>
template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
        MutantStack();
        ~MutantStack();
        MutantStack(MutantStack &);
        MutantStack &operator=(MutantStack &);
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        reverse_iterator rbegin()
        {
            return this->c.rbegin();
        }
        reverse_iterator rend()
        {
            return this->c.rend();
        }

};


template <typename T>
MutantStack<T>::MutantStack()
{
    
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack &other)
{
    if (this != &other)
    *this = other;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack &other)
{
    if (this != &other)
        std::stack<T>:operator=(other);
    return(*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{

}




#endif