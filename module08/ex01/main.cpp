#include <iostream>
#include "Span.hpp"
#include <vector>
#include <list>
int main()
{
	Span sp = Span(5);
	sp.addNumber(3);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	{
		std::vector<int> vect(20000, 0);
		// std::list<int> vect;

		for (int i = 0; i < 20000; i++)
		{
			// vect.push_back(i);
			vect[i] = i;
		}
		Span span(20000);

		try
		{
			span.addNumbers(vect.begin(), vect.end());
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << span.shortestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << span.longestSpan() << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			sp.addNumber(232312);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

    return 0;
}