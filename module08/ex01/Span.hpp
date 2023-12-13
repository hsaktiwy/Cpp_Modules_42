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
		template <typename Iterator> int my_distance(Iterator begin, Iterator end)
		{
			int			result;
			Iterator	curr;

			result = 0;
			curr = begin;
			while (curr != end)
			{
				++curr;
				++result;
			}
			return (result);
		}
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span& copy);
		Span& operator=(const Span& obj);
		void addNumber(int n);
		template <typename Iterator> void addNumbers(Iterator begin, Iterator end)
		{
			int	addnum;

			addnum = my_distance(begin, end);
			if (size + addnum <= N)
			{
				myset.insert(begin, end);
				size += addnum;
			}
			else
				throw	std::logic_error("No space left");
		}
		int	shortestSpan( void );
		int	longestSpan( void );
};
#endif