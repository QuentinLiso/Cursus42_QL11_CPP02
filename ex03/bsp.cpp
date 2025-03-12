/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:33:24 by qliso             #+#    #+#             */
/*   Updated: 2025/03/12 16:11:21 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
Calculates the cross product of two vectors: 
  - U->V (vector from U to V)
  - U->P (vector from U to P)

The cross product determines whether the point P is to the left or right 
of the directed edge U->V.

Mathematically, the 2D cross product formula is:
    cross(U->V, U->P) = (Vx - Ux) * (Py - Uy) - (Vy - Uy) * (Px - Ux)

Interpretation:
  - If the result is **positive**, P is to the **left** of U->V.
  - If the result is **negative**, P is to the **right** of U->V.
  - If the result is **zero**, P is **collinear** with U and V.

*/
Fixed   crossProduct(Point const &u, Point const &v, Point const &p)
{
    Fixed UVx = v.getX() - u.getX();
    Fixed UVy = v.getY() - u.getY();
    Fixed UPx = p.getX() - u.getX();
    Fixed UPy = p.getY() - u.getY();

    return (UVx * UPy - UVy * UPx);
}

/*
Determines whether a point P is inside the triangle ABC using the cross product method.

For P to be inside the triangle, it must be consistently on one side of 
all three edges (either all to the left or all to the right).

Steps:
1. Compute cross products:
   - A->B with A->P
   - B->C with B->P
   - C->A with C->P
2. If any cross product is **0**, P is on an edge.
3. If all cross products are **positive**, P is on the **same side** of each edge.
4. If all cross products are **negative**, P is on the **same side** of each edge.
5. If the signs are **mixed**, P is outside the triangle.

Mathematically:
  - crossProduct(a, b, point), crossProduct(b, c, point), and crossProduct(c, a, point)
    must **all be > 0** or **all be < 0** for P to be inside.

  - If there is a mix of positive and negative values, P is outside.

*/
bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed   cross1 = crossProduct(a, b, point);
    Fixed   cross2 = crossProduct(b, c, point);
    Fixed   cross3 = crossProduct(c, a, point);

    if ((cross1 == 0) || (cross2 == 0) || (cross3 == 0))
        return (false);

    bool    hasNeg = (cross1 < 0) || (cross2 < 0) || (cross3 < 0);
    bool    hasPos = (cross1 > 0) || (cross2 > 0) || (cross3 > 0);

    return (!(hasNeg && hasPos));
}