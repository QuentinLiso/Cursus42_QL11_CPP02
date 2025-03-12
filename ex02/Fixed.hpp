/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:16:29 by qliso             #+#    #+#             */
/*   Updated: 2025/03/12 09:10:57 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    
    private:

        int _n;
        static int const _bits = 8;

    public:
    
        Fixed(void);
        Fixed(int const n);
        Fixed(float const x);
        Fixed(Fixed const &src);
        ~Fixed(void);
        Fixed & operator=(Fixed const &rhs);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

        bool    operator>(Fixed const &rhs) const;
        bool    operator<(Fixed const &rhs) const;
        bool    operator>=(Fixed const &rhs) const;
        bool    operator<=(Fixed const &rhs) const;
        bool    operator==(Fixed const &rhs) const;
        bool    operator!=(Fixed const &rhs) const;
        Fixed     operator+(Fixed const &rhs) const;
        Fixed     operator-(Fixed const &rhs) const;
        Fixed     operator*(Fixed const &rhs) const;
        Fixed     operator/(Fixed const &rhs) const;
        
        Fixed & operator++(void);
        Fixed   operator++(int);
        Fixed & operator--(void);
        Fixed   operator--(int);

        static Fixed & min(Fixed &lhs, Fixed &rhs);
        static Fixed const & min(Fixed const &lhs, Fixed const &rhs);
        static Fixed & max(Fixed &lhs, Fixed &rhs);
        static Fixed const & max(Fixed const &lhs, Fixed const &rhs);
};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif