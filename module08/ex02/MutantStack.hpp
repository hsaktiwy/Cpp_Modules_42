#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>
template <class T, class container = std::deque<T> > class MutantStack : public std::stack <T, container>
{
    public:
        MutantStack()
        {

        }

        ~MutantStack()
        {

        }

        MutantStack(const MutantStack& copy)
        {
            *this = copy;
        }

        MutantStack& operator=(const MutantStack& obj)
        {
            std::stack< T , container >::operator=(obj);
            return (*this);
        }
        typedef typename container::iterator iterator; // this is our iterator

        iterator end( void )
        {
            return (this->c.end());
        }

        iterator begin( void )
        {
            return (this->c.begin());
        }
};
#endif