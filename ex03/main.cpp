/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:07:53 by qliso             #+#    #+#             */
/*   Updated: 2025/03/12 16:12:25 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point const A(3.0f, 2.0f);
    Point const B(2.0f, 3.0f);
    Point const C(1.0f, 1.0f);
    Point const P1(2.0f, 2.0f);
    Point const P2(17.8f, 2.0f);
    Point const P3(0.0f, 2.0f);
    Point const P4(2.4f, 2.1f);
    Point const P5(3.2f, -5.7f);
    Point const P6(1.8f, 1.8f);
    Point const P7(2.5f, 2.5f);

    std::cout << "A : " << A;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, A) << std::endl;
    std::cout << "B : " << B;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, B) << std::endl;
    std::cout << "C : " << C;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, C) << std::endl;
        
    std::cout << "P1 : " << P1;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, P1) << std::endl;
    std::cout << "P2 : " << P2;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, P2) << std::endl;
    std::cout << "P3 : " << P3;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, P3) << std::endl;
    std::cout << "P4 : " << P4;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, P4) << std::endl;
    std::cout << "P5 : " << P5;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, P5) << std::endl;
    std::cout << "P6 : " << P6;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, P6) << std::endl;
    std::cout << "P7 : " << P7;
    std::cout << " -> Is inside ? (1 yes, 0 no) " << bsp(A, B, C, P7) << std::endl;
    
    return (0);
}