#ifndef PMERGEME_HPP
#define PMERGEME_HPP
class PmergeMe {
    public:
        PmergeMe();
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& copy);
        PmergeMe& operator=(const PmergeMe& obj);
};

#endif