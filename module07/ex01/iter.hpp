#ifndef ITER_HPP
#define ITER_HPP


template <typename T, typename C>
void    iter(T *arr, int size,C function)
{
    for (int i = 0; i < size; i++)
        function (arr[i]);
}

#endif