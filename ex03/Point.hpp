/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:26:48 by qliso             #+#    #+#             */
/*   Updated: 2025/03/12 13:24:45 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class   Point
{

    private:
        Fixed const _x;
        Fixed const _y;

    public:
        Point(void);
        Point(float const &x, float const &y);
        Point(Point const &p);
        Point & operator=(Point const &p);
        ~Point(void);
        
        Fixed getX(void) const;
        Fixed getY(void) const;
        void  displayCoord(void) const;
};

std::ostream & operator<<(std::ostream &o, const Point &p);

#endif