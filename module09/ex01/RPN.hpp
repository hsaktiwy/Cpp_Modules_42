#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <iostream>

class RPN {
    private:
        std::stack<int> stack;
        std::string data;
    public:
        RPN();
        RPN(const std::string &Data);
        ~RPN();
        RPN(const RPN& copy);
        RPN& operator=(const RPN& obj);
        void    run(void);
};

#endif