// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>

template< typename T >
class Array
{
public:
    Array( void ) : mpArray( NULL ), mSize( 0 )
    {
        std::cout << "Default constructor called" << std::endl;
    };

    Array( unsigned int n )
    {
        mSize = n;
        mpArray = new T[ n ];
        for ( unsigned int i = 0; i < mSize; i++ )
        {
            mpArray[ i ] = 0;
        }
        std::cout << "Parameter constructor called" << std::endl;
    };

    Array( const Array& prArray )
    {
        std::cout << "Copy constructor called" << std::endl;
        mSize = 0;
        *this = prArray;
    };

    ~Array( void )
    {
        delete[] mpArray;
        std::cout << "Default destructor called" << std::endl;
    };

    Array& operator=( const Array& prArray )
    {
        std::cout << "Copy assignment operator called" << std::endl;

        if ( this == &prArray ) return *this;

        if ( mSize ) delete[] mpArray;

        mSize = prArray.mSize;
        mpArray = new T[ mSize ];

        for ( unsigned int i = 0; i < mSize; i++ )
        {
            mpArray[ i ] = prArray[ i ];
        }
        
        return *this;
    };

    T& operator[]( unsigned int i ) const
    {
        if ( i >= mSize )
            throw std::out_of_range( "Index out of range" );
        return mpArray[ i ];
    };

    unsigned int size( void ) const
    {
        return mSize;
    };

private:
    T* mpArray;
    unsigned int mSize;
};

template< typename T >
std::ostream& operator<<(std::ostream& os, const Array< T >& prArray)
{
    for ( unsigned int i = 0; i < prArray.size(); i++ )
    {
        os << prArray[ i ] << " ";
    }
    
    return os;
};

#endif
