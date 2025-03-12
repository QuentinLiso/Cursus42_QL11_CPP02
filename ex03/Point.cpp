/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:26:48 by qliso             #+#    #+#             */
/*   Updated: 2025/03/12 16:07:26 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
    // std::cout << "Point : Default constructor called" << std::endl;
}

Point::Point(float const &x, float const &y) :_x(Fixed(x)), _y(Fixed(y))
{
    // std::cout << "Point : Constructor float called" << std::endl;
}

Point::Point(Point const &p) : _x(p._x), _y(p._y)
{
    // std::cout << "Point : Copy constructor called" << std::endl;
}

Point & Point::operator=(Point const &p)
{
    (void)p;
    return (*this);
}

Point::~Point(void)
{
    // std::cout << "Point : Destructor called" << std::endl;
}

Fixed   Point::getX(void) const
{
    return (this->_x);
}

Fixed   Point::getY(void) const
{
    return (this->_y);
}

std::ostream & operator<<(std::ostream &o, const Point &p)
{
    o << "[" << p.getX().toFloat() << "," << p.getY().toFloat() << "]";
    return (o);
}
