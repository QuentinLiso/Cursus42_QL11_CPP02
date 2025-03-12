/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:16:29 by qliso             #+#    #+#             */
/*   Updated: 2025/03/11 14:01:35 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class   Fixed
{
    
    private:

        int _n;
        static int const _bits = 8;

    public:
    
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);
        Fixed & operator=(Fixed const &rhs);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif