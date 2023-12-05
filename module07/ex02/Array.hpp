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
        Array(): arr(NULL), arr_size(0)
        {

        }

        Array(unsigned int n): arr_size(n)
        {
            arr = new T[n];
        }

        Array(const Array<T> &copy)
        {
            arr = NULL;
            *this = copy;
        }

        Array<T>&   operator=(const Array<T> &obj)
        {
            if (this != &obj)
            {
                if (arr)
                    delete [] arr;
                arr = new T[obj.arr_size];
                for(unsigned int i = 0; i < obj.arr_size; i++)
                    arr[i] = obj.arr[i];
                arr_size = obj.arr_size;
            }
            return (*this);
        }

        T&  operator[](unsigned int index)
        {
            if (index >= arr_size)
                throw Array<T>::ArrayException();
            return (arr[index]);
        }

        ~Array()
        {
            if (arr)
                delete [] arr;
        }

        unsigned int size() const
        {
            return (arr_size);
        }
        class ArrayException: public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return ("Out of Array bounds");
                }
        };
};
// #include "Array.tpp"
#endif