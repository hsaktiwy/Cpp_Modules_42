#ifndef SPAN_HPP
#define SPAN_HPP
#include <set>
#include <exception>
#include <iostream>
class Span {
	private:
		unsigned int N;
		unsigned int size;
        std::multiset<int>   myset;
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span& copy);
		Span& operator=(const Span& obj);
		void addNumber(int n);
		template <typename T> void addNumbers(T begin, T end)
		{
			int	addnum;

			addnum = std::distance(begin, end);
			if (size + addnum <= N)
			{
				myset.insert(begin, end);
				size += addnum;
			}
			else
				throw	std::logic_error("Not space left");
		}
        int	shortestSpan( void );
        int	longestSpan( void );
};
#endif