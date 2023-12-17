#include "PmergeMe.hpp"

bool isSorted(const std::vector<int>& vec) {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isSorted(const std::vector<std::pair<int ,int> >& vec) {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isSorted(const std::deque<int>& vec) {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isSorted(const std::deque<std::pair<int ,int> >& vec) {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}


void quicksort(std::vector<std::pair<int ,int> > &i, size_t low, size_t high)
{
    if (!isSorted(i))
    {
        for (size_t a = low; a < high; a++)
        {
            size_t j = a + 1;
            if (i[a] > i[j])
                std::swap(i[a], i[j]);
        }
        quicksort(i , low, high);
    }
}

void quicksort(std::deque<std::pair<int ,int> > &i, size_t low, size_t high)
{
    if (!isSorted(i))
    {
        for (size_t a = low; a < high; a++)
        {
            size_t j = a + 1;
            if (i[a] > i[j])
                std::swap(i[a], i[j]);
        }
        quicksort(i , low, high);
    }
}

void    ft_do_binery_dsort(std::deque<int> &dsort, std::deque<std::pair<int ,int> > &pairs)
{
    std::deque<int> tmp;
    std::deque<int> Jacobsthal_number;
    std::deque<int> tmp_Jacobsthal_number;

    Jacobsthal_number.push_back(0);
    Jacobsthal_number.push_back(1);
    size_t a = 0;
    size_t i = 1;
    while (1)
    {
        a = Jacobsthal_number[i] + (Jacobsthal_number[i - 1] * 2);
        if (a < 0)
            break;
        Jacobsthal_number.push_back(a);
        if (a > pairs.size())
            break;
        i++;
    }
    a = 0;
    i = 2;
    size_t size_Jacobsthal_number = Jacobsthal_number.size();
    while (i < size_Jacobsthal_number)
    {
        a = Jacobsthal_number[i];
        if (a < 0)
            break;
        tmp_Jacobsthal_number.push_back(a);
        while (std::find(Jacobsthal_number.begin() , Jacobsthal_number.end(), --a) == Jacobsthal_number.end())
        {
            tmp_Jacobsthal_number.push_back(a);
        }
        i++;
    }
    tmp.push_back(pairs[0].second);
    for (std::deque<std::pair<int ,int> >::iterator i = pairs.begin(); i < pairs.end(); i++)
    {
        tmp.push_back(i->first);
    }
    size_t b = 1;
    size_t size = pairs.size();
    size_t size_tmp_Jacobsthal_number = tmp_Jacobsthal_number.size();
    while (b < size_tmp_Jacobsthal_number)
    {
        size_t index = tmp_Jacobsthal_number[b];

        if (index > size)
        {
            b++;
            continue;
        }
        std::deque<int>::iterator it = std::lower_bound(tmp.begin(), tmp.end() , pairs[index - 1].second);
        tmp.insert(it, pairs[index - 1].second);
        b++;
    }
    dsort = tmp;
}

void    ft_sort_deque(std::deque<int> &dsort)
{
    std::deque<std::pair<int ,int> > pairs;
    int tmp;
    bool odd = false;

    if (dsort.size() % 2)
    {
        tmp = dsort.back();
        dsort.pop_back();
        odd = true;
    }
    size_t size = dsort.size();
    for (size_t i = 0; i < size; i += 2)
    {
        std::pair<int ,int> tmp;
        tmp.first = dsort[i];
        tmp.second = dsort[i + 1];
        pairs.push_back(tmp);
    }
    for (std::deque<std::pair<int ,int> >::iterator i = pairs.begin(); i != pairs.end(); i++)
    {
        if (i->first < i->second)
            std::swap(i->first , i->second);
    }
    quicksort(pairs, 0, pairs.size() - 1);
    ft_do_binery_dsort(dsort, pairs);
    if (odd == true)
    {
        std::deque<int>::iterator it = std::lower_bound(dsort.begin(), dsort.end() , tmp);
        dsort.insert(it, tmp);
    }
}

void    ft_do_binery_vsort(std::vector<int> &vsort, std::vector<std::pair<int ,int> > &pairs)
{
    std::vector<int> tmp;
    std::vector<int> Jacobsthal_number;
    std::vector<int> tmp_Jacobsthal_number;

    Jacobsthal_number.push_back(0);
    Jacobsthal_number.push_back(1);
    size_t a = 0;
    size_t i = 1;
    while (1)
    {
        a = Jacobsthal_number[i] + (Jacobsthal_number[i - 1] * 2);
        if (a < 0)
            break;
        Jacobsthal_number.push_back(a);
        if (a > pairs.size())
            break;
        i++;
    }
    a = 0;
    i = 2;
    size_t size_Jacobsthal_number = Jacobsthal_number.size();
    while (i < size_Jacobsthal_number)
    {
        a = Jacobsthal_number[i];
        if (a < 0)
            break;
        tmp_Jacobsthal_number.push_back(a);
        while (std::find(Jacobsthal_number.begin() , Jacobsthal_number.end(), --a) == Jacobsthal_number.end())
        {
            tmp_Jacobsthal_number.push_back(a);
        }
        i++;
    }
    tmp.push_back(pairs[0].second);
    for (std::vector<std::pair<int ,int> >::iterator i = pairs.begin(); i < pairs.end(); i++)
    {
        tmp.push_back(i->first);
    }
    size_t b = 1;
    size_t size = pairs.size();
    size_t size_tmp_Jacobsthal_number = tmp_Jacobsthal_number.size();
    while (b < size_tmp_Jacobsthal_number)
    {
        size_t index = tmp_Jacobsthal_number[b];

        if (index > size)
        {
            b++;
            continue;
        }
        std::vector<int>::iterator it = std::lower_bound(tmp.begin(), tmp.end() , pairs[index - 1].second);
        tmp.insert(it, pairs[index - 1].second);
        b++;
    }
    vsort = tmp;
}

void    ft_sort_vector(std::vector<int> &vsort)
{
    std::vector<std::pair<int ,int> > pairs;
    int tmp;
    bool odd = false;

    if (vsort.size() % 2)
    {
        tmp = vsort.back();
        vsort.pop_back();
        odd = true;
    }
    size_t size = vsort.size();
    for (size_t i = 0; i < size; i += 2)
    {
        std::pair<int ,int> tmp;
        tmp.first = vsort[i];
        tmp.second = vsort[i + 1];
        pairs.push_back(tmp);
    }
    for (std::vector<std::pair<int ,int> >::iterator i = pairs.begin(); i != pairs.end(); i++)
    {
        if (i->first < i->second)
            std::swap(i->first , i->second);
    }
    quicksort(pairs, 0, pairs.size() - 1);
    ft_do_binery_vsort(vsort, pairs);
    if (odd == true)
    {
        std::vector<int>::iterator it = std::lower_bound(vsort.begin(), vsort.end() , tmp);
        vsort.insert(it, tmp);
    }
}

void    ft_sort(const std::string &obj)
{
    std::vector<int> vsort;
    std::deque<int> dsort;
    std::stringstream tmp(obj);

    int a;
    while (tmp >> a)
    {
        vsort.push_back(a);
    }
    if (isSorted(vsort) || vsort.size() == 1)
        throw std::runtime_error ("is already sorted");
    clock_t start = std::clock();
    ft_sort_vector(vsort);
    clock_t end = std::clock();
    clock_t dstart = std::clock();
    size_t len = 0;
    tmp.clear();
    tmp.str(obj);
    while (tmp >> a)
    {
        dsort.push_back(a);
        len++;
    }
    if (isSorted(dsort) || dsort.size() == 1)
        throw std::runtime_error ("is already sorted");
    ft_sort_deque(dsort);
    clock_t dend = std::clock();
    std::cout << "Before: ";
        std::cout << obj;
    std::cout << std::endl;
    std::cout << "After:  ";
    for (std::vector<int>::iterator i = vsort.begin(); i < vsort.end(); i++)
        std::cout << *i<< " ";
    std::cout << std::endl;
    double elapsedSeconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    long elapsedMicroseconds = static_cast<long>(elapsedSeconds * 1000000);
    std::cout << "Time to process a range of " << len << " elements with std::vector<int> " << elapsedMicroseconds << " us" << std::endl;
    elapsedSeconds = static_cast<double>(dend - dstart) / CLOCKS_PER_SEC;
    elapsedMicroseconds = static_cast<long>(elapsedSeconds * 1000000);
    std::cout << "Time to process a range of " << len << " elements with std::deque<int> " << elapsedMicroseconds << " us" << std::endl;   
}