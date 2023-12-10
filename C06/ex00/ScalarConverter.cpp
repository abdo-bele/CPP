#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "destructer called" << std::endl;
}

int is_ndegit(const std::string &obj, int a)
{
    int i = obj.length()- 1;
    while (i)
    {
        if ((obj[i] < '0' || obj[i] > '9') && i > 0 && obj[i] != '.')
        {
            if (obj[i] == 'f' && obj[i + 1] == '\0' && a == 1)
                return 0;
            else
                return 1;
        }
        i--;
    }
    return 0;
}

int ft_check_obj(const std::string &obj)
{
    if (obj == "nan" || obj == "inf" || obj == "-inf" || obj == "+inf")
        return 5;
    else if (obj == "-inff" || obj == "+inff")
        return 6;
    else if (obj.length() == 1 && isalpha(obj[0]))
        return 4;
    else if(obj.find(".") != std::string::npos && is_ndegit(obj, 1) == 0)
        return 0;
    else if(obj[0] == '-' && obj.find(".") != std::string::npos && is_ndegit(obj, 1) == 0)
        return 1;
    else if(obj[0] == '-' && obj.find(".") == std::string::npos && is_ndegit(obj, 0) == 0)
        return 2;
    else if (obj.find(".") == std::string::npos && is_ndegit(obj , 0) == 0)
        return 3;
    return -1;
}

void ScalarConverter::convert(std::string &obj)
{
    std::stringstream a(obj);
    size_t pose = 0;
    float f = 0;
    double d = 0;
    char c = '\0';
    int i = 0;

    if (ft_check_obj(obj) == 0 || ft_check_obj(obj) == 1)
    {
        // std::cout << "float\n";
        pose = obj.find("f");
        if (pose != std::string::npos && pose == (obj.length() - 1))
        {
            a.str(obj.substr(0, pose));
            a >> f;
            i = static_cast<int>(f);
            d = static_cast<double>(f);
            c = static_cast<char>(f);
        }
        else
        {
        // std::cout << "doubel\n";
            a >> d;
            i = static_cast<int>(d);
            f = static_cast<float>(d);
            c = static_cast<char>(d);
        }
    }
    else if (ft_check_obj(obj) == 3 || ft_check_obj(obj) == 2)
    {
        // std::cout << "int\n";
        a >> i;
        f = static_cast<float>(i);
        d = static_cast<double>(i);
        c = static_cast<char>(i);
    }
    else if (ft_check_obj(obj) == 4)
    {
        // std::cout << "char \n";
        a >> c;
        f = static_cast<float>(c);
        d = static_cast<double>(c);
        i = static_cast<int>(c);
    }
    else if (ft_check_obj(obj) == -1)
    {
        std::cout << "Error " << std::endl;
        return ;
    }
    else if(ft_check_obj(obj) == 5 || ft_check_obj(obj) == 6)
    {
        if(ft_check_obj(obj) == 5 )
        {
            std::cout << "char: impossible"<< std::endl;
            std::cout << "int: impossible"<< std::endl;
            std::cout << "float: " << obj <<"f" <<std::endl;
            std::cout << "double: " << obj << std::endl;
        }
        else 
        {
            std::cout << "char: impossible"<< std::endl;
            std::cout << "int: impossible"<< std::endl;
            std::cout << "float: " << obj <<std::endl;
            std::cout << "double: " << obj.substr(0, obj.length()-1) << std::endl;
        }
        return ;
    }

    if(a.fail())
        std::cerr << "Error converting string to int." << std::endl;
    else
    {
        if (f > 127 || f < 0)
            std::cout << "char: converting impossible"<< std::endl;
        else if ((c >= 0 && c <= 32) || c == 127)
            std::cout << "char:  Non displayable" << std::endl;
        else
            std::cout << "char: '" << c << "'"<< std::endl;
        if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
            std::cout << "int: converting impossible"<< std::endl;
        else
            std::cout << "int: " << i << std::endl;
        std::cout << "float: " << f <<"f" <<std::endl;
        std::cout << "double: " << d<< std::endl;
    }
}