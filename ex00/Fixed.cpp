/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:16:32 by qliso             #+#    #+#             */
/*   Updated: 2025/04/06 16:32:52 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
    std::cout << "Fixed : Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) : _n(src._n)
{
    std::cout << "Fixed : Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Fixed : Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Fixed : Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_n = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "Fixed : getRawBits member function called" << std::endl;
    return (this->_n);
}

void    Fixed::setRawBits(int const raw)
{
    this->_n = raw;
}
