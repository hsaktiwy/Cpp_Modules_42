
template<typename T> Array<T>::Array(): arr(NULL), arr_size(0){

}

template<typename T> Array<T>::~Array()
{
    if (arr)
    {
        delete [] arr;
    }
}

template<typename T> Array<T>::Array(unsigned int n) : arr_size(n)
{
    arr = new T[n];
}

template<typename T> Array<T>::Array(Array<T> &copy)
{
    arr = NULL;
    *this = copy;
}

template<typename T> Array<T>& Array<T>::operator=(Array<T> &obj)
{
    if (this != &obj)
    {
        if (arr)
        {
            delete [] arr;
        }
        arr = new T[obj.arr_size];
        for(unsigned int i = 0; i < obj.arr_size; i++)
        {
            arr[i] = obj.arr[i];
        }
        arr_size = obj.arr_size;
    }
    return (*this);
}

template<typename T> T& Array<T>::operator[](unsigned int index)
{
    if (index >= 0 && index < arr_size)
    {
        return (arr[index]);
    }
    else
    {
        throw Array<T>::ArrayException();
    }
}

template<typename T> unsigned int Array<T>::size() const
{
    return (arr_size);
}

template<typename T> const char *Array<T>::ArrayException::what() const throw()
{
    return ("Out of Array bounds");
}
