// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "include/Array.h"

int main ( void )
{
    {
        std::cout << "============== a ==============" << std::endl;
        Array< int > a( 10 );

        for ( unsigned int i = 0; i < a.size(); i++ )
        {
            a[ i ] = i;
        }

        std::cout << a << std::endl;
        std::cout << "===============================" << std::endl;

        std::cout << "============== b ==============" << std::endl;
        Array< int > b( 15 );

        for ( unsigned int i = 0; i < b.size(); i++ )
        {
            b[ i ] = 42;
        }

        std::cout << b << std::endl;
        std::cout << "===============================" << std::endl;

        std::cout << "============== a ==============" << std::endl;
        a = b;
        std::cout << a << std::endl;
        std::cout << "===============================" << std::endl;

        std::cout << "============== b ==============" << std::endl;
        std::cout << b << std::endl;
        std::cout << "===============================" << std::endl << std::endl;
    }
    {
        std::cout << "============== a ==============" << std::endl;
        Array< int > a( 10 );

        for ( unsigned int i = 0; i < a.size(); i++ )
        {
            a[ i ] = i;
        }

        std::cout << a << std::endl;
        std::cout << "===============================" << std::endl;

        std::cout << "============== b ==============" << std::endl;
        Array< int > b( a );

        std::cout << b << std::endl;
        std::cout << "===============================" << std::endl;

        for ( unsigned int i = 0; i < b.size(); i++ )
        {
            b[ i ] = 42;
        }

        std::cout << "============== a ==============" << std::endl;
        std::cout << a << std::endl;
        std::cout << "===============================" << std::endl;

        std::cout << "============== b ==============" << std::endl;
        std::cout << b << std::endl;
        std::cout << "===============================" << std::endl;
    }
}
