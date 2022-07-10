// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef ITER_H
#define ITER_H

#include <iostream>

template< typename T >
void concatOne( T& x )
{
    x += '1';
};

template< typename T >
void increment( T& x )
{
    x += 1;
};

template< typename T, typename L >
void iter( T* array, L length, void( *f )( T& ) )
{
    for ( L i = 0; i < length; i++ )
        f( array[ i ] );
};

template< typename T, typename L >
void iter( const T* array, L length, void( *f )( const T& ) )
{
    for ( L i = 0; i < length; i++ )
        f( array[ i ] );
};

#endif
