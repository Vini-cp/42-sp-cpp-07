// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef WHATEVER_H
#define WHATEVER_H

template< typename T >
void swap( T& x, T& y )
{
    T aux = x;
    x = y;
    y = aux;
}

template< typename T >
T min( const T& x, const T& y )
{
    return ( ( x < y ) ? x : y );
}

template< typename T >
T max( const T& x, const T& y )
{
    return ( ( x > y ) ? x : y );
}

#endif
