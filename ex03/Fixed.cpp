/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:16:32 by qliso             #+#    #+#             */
/*   Updated: 2025/03/12 16:06:07 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0)
{
    // std::cout << "Fixed : Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) : _n(src._n)
{
    // std::cout << "Fixed : Copy constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _n(n << _bits)
{
    // std::cout << "Fixed : Int constructor called" << std::endl;
}

Fixed::Fixed(float const x) : _n((int)(x * (float)(1 << _bits) + (x >= 0 ? 0.5:-0.5)))
{
    // std::cout << "Fixed : Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    // std::cout << "Fixed : Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Fixed : Copy assignment operator called" << std::endl;
    this->_n = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_n);
}

void    Fixed::setRawBits(int const raw)
{
    this->_n = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_n / (float)(1 << _bits));
}

int Fixed::toInt(void) const
{
    return ((int)((float)this->_n / (float)(1 << _bits)));
}

bool    Fixed::operator>(Fixed const &rhs) const
{
    return (this->_n > rhs._n);
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return (this->_n < rhs._n);
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return (this->_n >= rhs._n);
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return (this->_n <= rhs._n);
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    return (this->_n == rhs._n);
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    return (this->_n != rhs._n);
}

Fixed   Fixed::operator+(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed & Fixed::operator++(void)
{
    ++this->_n;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   tmp(*this);
    
    this->_n++;
    return (tmp);
}

Fixed & Fixed::operator--(void)
{
    --this->_n;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp(*this);

    this->_n--;
    return (tmp);
}

Fixed & Fixed::min(Fixed &lhs, Fixed &rhs)
{
    return (lhs <= rhs ? lhs : rhs);
}

Fixed const & Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
    return (lhs <= rhs ? lhs : rhs);
}

Fixed & Fixed::max(Fixed &lhs, Fixed &rhs)
{
    return (lhs >= rhs ? lhs : rhs);
}

Fixed const & Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
    return (lhs >= rhs ? lhs : rhs);
}

std::ostream & operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}
