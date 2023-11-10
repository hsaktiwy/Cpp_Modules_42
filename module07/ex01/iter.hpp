#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void    iter(T arr[], int size, void (*function)(T))
{
    for (int i = 0; i < size; i++)
        function (arr[i]);
}

#endif