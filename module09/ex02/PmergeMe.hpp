#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <exception>
#include <vector>
#include <deque>
#include <climits>
#include <algorithm>
#include <ctime>
class PmergeMe {
    private:
        std::vector<int> vector;
        PmergeMe();
    public:
        PmergeMe(char **argv);
        ~PmergeMe();
        PmergeMe(const PmergeMe& copy);
        // FJA refaire to Ford–Johnson-Algorithm
        void run( void );
        PmergeMe& operator=(const PmergeMe& obj);
};

#endif