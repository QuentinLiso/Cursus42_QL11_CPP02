/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:07:53 by qliso             #+#    #+#             */
/*   Updated: 2025/03/12 11:14:36 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


int main(void)
{
    std::cout << "************MANDATORY TESTS*******************\n" << std::endl;
    Fixed   a;
    Fixed   b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << "************PERSONAL TESTS*******************\n" << std::endl;
    
    a = Fixed(1) + Fixed(2);
    std::cout << "a : Fixed(1) + Fixed (2) = " << a << std::endl;
    a = Fixed(1) - Fixed(2);
    std::cout << "a : Fixed(1) - Fixed (2) = " << a << std::endl;
    b = Fixed(1) * Fixed(2);
    std::cout << "b : Fixed(1) * Fixed (2) = " << b << std::endl;
    b = Fixed(1) / Fixed(2);
    std::cout << "b : Fixed(1) / Fixed (2) = " << b << std::endl;
    std::cout << "Max (a, b) : " << Fixed::max(a, b) << std::endl;
    std::cout << "Min (a, b) : " << Fixed::min(a, b) << std::endl;
    std::cout << "a++ : " << a++ << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "++a : " << ++a << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "a-- : " << a-- << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "--a : " << --a << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "++b : " << ++b << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "b-- : " << b-- << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "--b : " << --b << std::endl;
    std::cout << "b : " << b << std::endl;

    a = Fixed(317.431034893345f) + Fixed(2.5f);
    std::cout << "a : Fixed(317.431034893345f) + Fixed (2.5f) = " << a << std::endl;
    a = Fixed(317.431034893345f) - Fixed(2.5f);
    std::cout << "a : Fixed(317.431034893345f) - Fixed (2.5f) = " << a << std::endl;
    b = Fixed(317.431034893345f) * Fixed(2.5f);
    std::cout << "b : Fixed(317.431034893345f) * Fixed (2.5f) = " << b << std::endl;
    b = Fixed(317.431034893345f) / Fixed(2.5f);
    std::cout << "b : Fixed(317.431034893345f) / Fixed (2.5f) = " << b << std::endl;
    std::cout << "Max (a, b) : " << Fixed::max(a, b) << std::endl;
    std::cout << "Min (a, b) : " << Fixed::min(a, b) << std::endl;
    std::cout << "a++ : " << a++ << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "++a : " << ++a << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "a-- : " << a-- << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "--a : " << --a << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "++b : " << ++b << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "b-- : " << b-- << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "--b : " << --b << std::endl;
    std::cout << "b : " << b << std::endl;
    
    return (0);
}