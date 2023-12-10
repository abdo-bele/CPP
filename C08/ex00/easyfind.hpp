/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:02:47 by aarchtou          #+#    #+#             */
/*   Updated: 2023/12/07 16:05:54 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <exception>


template <typename T>
void easyfind(T container, int value)
{
    typename T::iterator  iter;

    iter = std::find(container.begin(), container.end(), value);
    if (iter ==  container.end())
        throw std::runtime_error ("value note found");
    std::cout << "element  found"<< std::endl;
}



#endif