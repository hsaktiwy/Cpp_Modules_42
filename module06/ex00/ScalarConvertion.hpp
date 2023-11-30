#ifndef SCALARCONVERTION_HPP
#define SCALARCONVERTION_HPP
#include <iostream>
#include <limits>
#include <string>
class ScalarConvertion {
	public:
		static void		Convert(const std::string &str);
	private:
		ScalarConvertion();
		~ScalarConvertion();
		ScalarConvertion(const ScalarConvertion& copy);
		ScalarConvertion& operator=(const ScalarConvertion& obj);
};
#endif