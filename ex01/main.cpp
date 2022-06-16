// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "include/Iter.h"

#include <iostream>

int main( void )
{
    {
        std::cout << "================ Int Array ================" << std::endl;

        int lIntArray[] = { 0, 1, 2, 3, 4, 5 };

        for ( int i = 0; i < 6; i++ )
            std::cout << lIntArray[ i ] << " ";
        std::cout << std::endl;

        ::iter( lIntArray, 6, ::increment );

        for ( int i = 0; i < 6; i++ )
            std::cout << lIntArray[ i ] << " ";
        std::cout << std::endl;

        std::cout << "===========================================" << std::endl << std::endl;
    }
    {
        std::cout << "================ Int Array ================" << std::endl;

        char lCharArray[] = { 'A', 'c', 'X', 'j', 'R', 'k' };

        for ( int i = 0; i < 6; i++ )
            std::cout << lCharArray[ i ] << " ";
        std::cout << std::endl;

        ::iter( lCharArray, 6, ::increment );

        for ( int i = 0; i < 6; i++ )
            std::cout << lCharArray[ i ] << " ";
        std::cout << std::endl;

        std::cout << "===========================================" << std::endl << std::endl;
    }
    {
        std::cout << "=============== Float Array ===============" << std::endl;

        float lFloatArray[] = { 0.3, 1.7, 2.4, 3.1, 4.9, 5.6 };

        for ( int i = 0; i < 6; i++ )
            std::cout << lFloatArray[ i ] << " ";
        std::cout << std::endl;

        ::iter( lFloatArray, 6, ::increment );

        for ( int i = 0; i < 6; i++ )
            std::cout << lFloatArray[ i ] << " ";
        std::cout << std::endl;

        std::cout << "===========================================" << std::endl << std::endl;
    }
    {
        std::cout << "================ Str Array ================" << std::endl;

        std::string lStrArray[] = { "One", "Two", "Three", "Four", "Five", "Six" };

        for ( int i = 0; i < 6; i++ )
            std::cout << lStrArray[ i ] << " ";
        std::cout << std::endl;

        ::iter( lStrArray, 6, ::increment );

        for ( int i = 0; i < 6; i++ )
            std::cout << lStrArray[ i ] << " ";
        std::cout << std::endl;

        std::cout << "===========================================" << std::endl << std::endl;
    }
    {
        std::cout << "================ Str Array ================" << std::endl;

        std::string lStrArray[] = { "One", "Two", "Three", "Four", "Five", "Six" };

        for ( int i = 0; i < 6; i++ )
            std::cout << lStrArray[ i ] << " ";
        std::cout << std::endl;

        ::iter( lStrArray, 6, ::concatOne );

        for ( int i = 0; i < 6; i++ )
            std::cout << lStrArray[ i ] << " ";
        std::cout << std::endl;

        std::cout << "===========================================" << std::endl << std::endl;
    }
    {
        std::cout << "================ Int Array ================" << std::endl;

        int lIntArray[] = { 0, 1, 2, 3, 4, 5 };

        for ( int i = 0; i < 6; i++ )
            std::cout << lIntArray[ i ] << " ";
        std::cout << std::endl;

        ::iter( lIntArray, 6, ::concatOne );

        for ( int i = 0; i < 6; i++ )
            std::cout << lIntArray[ i ] << " ";
        std::cout << std::endl;

        std::cout << "===========================================" << std::endl << std::endl;
    }
    return 0;
}
