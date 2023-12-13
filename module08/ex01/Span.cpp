#include "Span.hpp"

#include "Span.hpp"

Span::Span(unsigned int n) : N(n), size(0)
{
	
}

Span::Span()
{

}

Span::~Span()
{

}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span& Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		myset = obj.myset;
		size = obj.size;
		N = obj.N;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->size < this->N)
	{
		this->myset.insert(n);
		size++;
	}
	else
		throw std::logic_error("No space left");
}

int	Span::shortestSpan( void )
{
	int	shortest = std::numeric_limits<int>::max();
	if (myset.size() > 1)
	{
		std::set<int>::iterator prev = myset.begin();
		std::set<int>::iterator it = myset.begin();
		++it;
		while (it != myset.end())
		{
			int	distance = (*it - *prev);
			if (distance <  shortest)
				shortest = distance;
			++it;
			++prev;
		}
	}
	else
		throw std::logic_error("No data or not enough data");
	return (shortest);
}

int	Span::longestSpan( void )
{
	if (myset.size() > 1)
		return (*(myset.rbegin()) - *(myset.begin()));
	else
		throw std::logic_error("No data or not enough data");
}
