#include "RPN.hpp"

bool    is_operator(char a)
{
    if (a == '*' || a == '/' || a == '-' || a == '+')
        return true;
    else
        throw std::runtime_error("ERROR");
    return false;
}

int ft_calcule(char a, std::stack<int> &rpn)
{
    int s = rpn.top();
    rpn.pop();
    int f = rpn.top();
    rpn.pop();

    if (a == '*')
        return (f * s);
    else if (a == '/')
    {
        if (s == 0)
            throw std::runtime_error("can't divide by 0");
        return (f / s);
    }
    else if( a == '-')
        return (f - s);
    else if(a == '+')
        return (f + s);
    return 0;
}

void    Rpn_calculator(const std::string &obj)
{
    std::stack<int> rpn;
    std::istringstream converter(obj);
    char a;
    while (converter >> a)
    {
        if (rpn.size() >= 2 && !isdigit(a) && is_operator(a))
            rpn.push(ft_calcule(a, rpn));
        else if (isdigit(a))
        {
            int b = a - '0';
            rpn.push(b);
        }
        else 
            throw std::runtime_error("ERROR");
    }
    if (rpn.size() == 1)
        std::cout << rpn.top() << std::endl;
    else 
        throw std::runtime_error("ERROR");
}