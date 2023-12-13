#include "RPN.hpp"

RPN::RPN(): data("")
{

}

static void CheckArgs(const std::string &data)
{
    for(size_t i = 0; i < data.size(); i++)
    {
        if (data[i] != '+' && data[i] != '-' && data[i] != '/' && data[i] != '*')
        {
            if (data[i] != ' ' && (!std::isdigit(data[i])
                || (std::isdigit(data[i]) && data[i + 1] && std::isdigit(data[i + 1]))))
                throw std::logic_error("Error");
        }
    }
}

RPN::RPN(const std::string &Data): data(Data)
{
    CheckArgs(Data);
}

RPN::~RPN()
{

}

RPN::RPN(const RPN& copy)
{
    *this = copy;
}

RPN& RPN::operator=(const RPN& obj)
{
    if (this != &obj)
    {
        stack = obj.stack;
    }
    return (*this);
}

void    RPN::run(void)
{
    for(size_t i = 0; i < data.size(); i++)
    {
        if (data[i] == '+' || data[i] == '-' || data[i] == '/' || data[i] == '*')
        {
            if (stack.size() >= 2)
            {
                int op2 = stack.top();
                stack.pop();
                int op1 = stack.top();
                stack.pop();
                if (data[i] == '+')
                    op1 += op2;
                if (data[i] == '-')
                    op1 -= op2;
                if (data[i] == '*')
                    op1 *= op2;
                if (data[i] == '/')
                    op1 /= op2;
                stack.push(op1);
            }
            else
                break;
        }
        if (std::isdigit(data[i]))
            stack.push(data[i] - '0');
    }
    if (stack.size() == 1)
    {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
    else
        throw std::logic_error("Error");
}
