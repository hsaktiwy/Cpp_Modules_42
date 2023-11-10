#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>
template <typename T> class Array
{
    private:
        T *arr;
        unsigned int arr_size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array<T> &copy);
        Array<T>&   operator=(Array<T> &obj);
        T&  operator[](unsigned int index);
        ~Array();
        unsigned int size() const;
    class ArrayException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

#include "Array.tpp"
#endif