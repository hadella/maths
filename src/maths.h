/**
 * \file maths.h
 * \author Justin Hadella (justin.hadella@gmail.com)
 * \brief 
 * \version 0.1
 * \date 2023-05-08
 * 
 * \copyright Copyright (c) 2023 Justin Hadella
 */
#ifndef MATHS_h
#define MATHS_h

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief Calculates the least common multiple between integers *u* and *v*
 * 
 * The least common multiple (*lcm*) of two positive numbers *u* and *v* is the
 * smallest positive integer that is evenly divisble by both *u* and *v*.
 * 
 * \f[
 *   lcm(u, v) = \frac{\left | {uv} \right |}{gcd(u, v)} = \left | u \right | \cdot \frac{\left | v \right |}{gcd(u, v)}
 * \f]
 *
 * These formulas are also valid when exactly one of *u* and *v* is 0 since 
 * \f$gcd(u, 0) = \left | u \right |\f$.
 * 
 * However, if both *u* and *v* are both 0, then these formulas would cause a 
 * division by 0! This creates a special case:
 * 
 * \f[lcm(0, 0) = 0\f]
 * 
 * \param u an integer
 * \param v an integer
 * \return the least common multiple between *u* and *v*
 */
int lcm(int u, int v);

/**
 * \brief Calculates the greatest common divisor between integers *u* and *v*
 * 
 * The greatest common divisor (*gcd*) of two non-zero integers *u* and *v* is the 
 * greatest positive integer *d* such that *d* is a divisor of both *u* and *v*;
 * that is, there are integers *e* and *f* such that \f$u = de\f$ and \f$v = df\f$
 * where *d* is the largest such integer.
 * 
 * This definition also applies when one of *u* and *v* is 0. In this case, the *gcd*
 * the absolute value of the non-zero integer.
 * 
 * \f[gcd(u, 0) = gcd(0, u) = |u|\f]
 * 
 * \param u an integer
 * \param v an integer
 * \return greatest common divisor between *u* and *v*
 */
int gcd(int u, int v);

/**
 * \brief Calculates the next integer greater than *u* which is a multiple of *v*
 * 
 * \param u an integer
 * \param v an integer
 * \return the next integer greater than  *u* which is a multiple of *v*
 */
int nlm(int u, int v);

/**
 * \brief Calculates the *triangle* number which is the sum of all positive integers
 * from 1 to *n*.
 * 
 * \f[tri(n) = \sum_{i=1}^{n}i = 1 + 2 + 3 + \cdots + n  = \frac{n \cdot (n + 1)}{2}\f]
 *
 * \param n an integer
 * \return the triangle number of *n*
 */
unsigned long int tri(unsigned int n);

#ifdef __cplusplus
} 
#endif
#endif // MATHS_h
