#ifndef SPAN_HPP
#define SPAN_HPP
#include <set>
#include <exception>
#include <iostream>
class Span {
	private:
		unsigned int N;
		unsigned int size;
        std::set<int>   myset;
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

			addnum = end - begin;
			std::cout << addnum << std::endl;
			if (size + addnum <= N)
			{
				myset.insert(begin, end);
				size += addnum;
			}
			else
				throw ExceptionSpanNoSpace();
		}
        int	shortestSpan( void );
        int	longestSpan( void );
		class  ExceptionSpanNoSpace : public std::exception
		{
			const char *what() const throw()
			{
				return ("Not space left");
			}
		};
		class  ExceptionSpanNoData : public std::exception
		{
			const char *what() const throw()
			{
				return ("No data or not enough data");
			}
		};
};
#endif