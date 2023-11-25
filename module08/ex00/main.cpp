#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	std::vector<int> myVector(arr, arr + size);
	std::list<int> myList(arr, arr + size);
	std::deque<int> myDeque(arr, arr + size);
	std::set<int>	mySet(arr, arr + size);
	std::unordered_set<int> myUnorderedSet(arr, arr + size);
	try {
		std::cout << "Vector : check if " << 3 << " exist in our container" << std::endl;
		easyfind(myVector, 3);
	} catch (const std::exception &e) {
	    std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "List : check if " << 6 << " exist in our container" << std::endl;
		easyfind(myList, 6);  // 6 is not in the list, should throw an exception
	} catch (const std::exception &e) {
	    std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "Deque : check if " << 4 << " exist in our container" << std::endl;
		easyfind(myDeque, 4);
	} catch (const std::exception &e) {
	    std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "Set : check if " << 2 << " exist in our container" << std::endl;
		easyfind(mySet, 2);
	} catch (const std::exception &e) {
	    std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "UnorderedSet : check if " << 5 << " exist in our container" << std::endl;
		easyfind(myUnorderedSet, 5);
	} catch (const std::exception &e) {
	    std::cerr << e.what() << std::endl;
	}
}