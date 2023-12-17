#include "BitcoinExchange.hpp"

void    ft_check_space(const std::string &line)
{
    size_t a = line.length();

    int b=0;
    for (size_t i = 0; i < a; i++)
    {
        if (line[i] == ' ' && line[i + 1] == '|' && line[i + 2] == ' ')
        {
            b += 2;
            i += 3; 
        }
        if (line[i] == ' ')
            b++;
    }
    if (b != 2)
        throw std::runtime_error("Error: bad input => "+ line);
}


void ft_check_content(const std::string &line)
{
    size_t a = line.length();

    int b=0;
    for (size_t i = 0; i < a; i++)
    {
        if (line[i] == ' ' && line[i + 1] == '|' && line[i + 2] == ' ')
        {
            b += 2;
            i += 3; 
        }
        if (line[i] == ' ')
            b++;
        if (!isdigit(line[i]) || (line[i] != '|' && line[i] != '-' && line[i] != ' '))
            throw std::runtime_error("Error: bad input => "+ line);
    }
    if (b != 2)
        throw std::runtime_error("Error: bad input => "+ line);
    
}

bool has30Days(int month) {
    return (month == 4 || month == 6 || month == 9 || month == 11);
}

bool has31Days(int month) {
    return (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12);
}

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

void ft_check_date(const std::string &vale)
{
    std::string year;
    std::string month;
    std::string day;

    std::stringstream split(vale);

    std::getline(split, year, '-');
    std::getline(split, month, '-');
    std::getline(split, day);
    if (year.length() != 4 || month.length() != 2 || day.length() != 2)
        throw std::runtime_error("Error: bad input => "+ vale);
    std::stringstream date(year);
    int _year;
    int _month;
    int _day;
    _day = atoi(day.c_str());
    _month = atoi(month.c_str());
    _year = atoi(year.c_str());
    if (_year < 2009 || _month <= 0 || _month > 12)
            throw std::runtime_error("Error: bad input => "+ vale);
    if (has30Days(_month))
    {
        if (_day <= 0 || _day > 30)
            throw std::runtime_error("Error: bad input => "+ vale);
    }
    else if (has31Days(_month))
    {
        if (_day <= 0 || _day > 31)
            throw std::runtime_error("Error: bad input => "+ vale);
    }
    else if (_month == 2)
    {
        if (isLeapYear(_year))
        {
            if (_day <= 0 || _day > 29)
                throw std::runtime_error("Error: bad input => "+ vale);
        }
        else
        {
            if (_day <= 0 || _day > 28)
                throw std::runtime_error("Error: bad input => "+ vale);
        }
    }
}

float   ft_check_value(const std::string &value, const std::string &line)
{
    int p = 0;
    for (size_t i = 0; i < value.size(); i++)
    {
        if (i == 0 && value[i] == '+')
            continue;
        else if (value[i] == '.' && p < 1)
            p++;
        else if (!isdigit(value[i]))
                throw std::runtime_error("Error: bad input => "+ line);
    }
    
    float a = atof(value.c_str());
    if(a < 0)
        throw std::runtime_error("Error: not a positive number. " + line);
    else if (a > 1000)
        throw std::runtime_error("Error: to high number. " + line);
    return a;
}

void    return_value(std::ifstream &infile, std::ifstream &data)
{
    std::map<std::string, float> datamap;

    (void)data;
    std::string line;
    std::string line1;
    std::getline(infile, line);
    if (line != "date | value")
        throw std::runtime_error("Error: file head not found");
    std::getline(data, line1);
    std::stringstream value(line);
    std::string vale;

    while (std::getline(data, line1))
    {
        std::string key;
        float values;
        std::stringstream data_base(line1);
        std::getline(data_base, key, ',');
        std::getline(data_base, line1);
        values = atof(line1.c_str());
        datamap[key] = values;
    }
    
    while (std::getline(infile, line))
    {
        try
        {
            std::string key;
            std::string pip;
            float values;
            ft_check_space(line);
            value.str(line);
            value >> key;
            ft_check_date(key);
            value >> pip;
            if (pip != "|")
            {
                std::cout << "Error: bad input => " + line << std::endl;
                continue;
            }
            value >> vale;
            if (pip == vale)
            {
                std::cout << "Error: bad input => " + line << std::endl;
                continue;
            }
            values = ft_check_value(vale, line);
            value.clear();
            std::map<std::string, float>::iterator it = datamap.find(key);
            if (it == datamap.end())
            {
                it = datamap.upper_bound(key);
                it--;
            }
            std::cout << key + " => "<< values << " = " << it->second * values << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            value.clear();
        }
    }   
}

// << std::fixed << std::setprecision(2)