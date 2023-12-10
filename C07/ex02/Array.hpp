#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        unsigned int _size;
        T *array;
    public:
        Array();
        Array(unsigned int);
        Array(Array <T> &);
        Array <T> &operator=(Array <T> &);
        T &operator[](unsigned int  index);
        const T &operator[](unsigned int  index) const;
        unsigned int size() const ;
        ~Array();
};



template <typename T>
unsigned int  Array<T>::size()const
{
    return (this->_size);
}

template <typename T>
Array<T>::Array(unsigned int n) :_size(n), array(new T[n])
{
}

template <typename T>
Array<T>::Array(): _size(0), array(new T[0])
{
}

template <typename T>
Array<T>::Array(Array <T> &obj){
    this->array = new T[0];
    *this = obj;
}

template <typename T>
Array <T>& Array<T>::operator=(Array <T> &obj)
{
    if (this != &obj)
    {
        delete this->array;
        this->array = new T;
        for (size_t i = 0; i < obj._size; i++)
            this->array[i] = obj.array[i];
        this->_size = obj._size;
    }
    return *this;
}


template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index < 0 || index >= this->_size)
        throw std::out_of_range("Index out of bounds");
    return this->array[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index < 0 || index >= this->_size)
        throw std::out_of_range("Index out of bounds");
    return array[index];
}

template <typename T>
Array<T>::~Array(){
    delete this->array;
}

#endif