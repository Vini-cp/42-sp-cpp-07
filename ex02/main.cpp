// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "include/Array.h"

#include <cstdlib>
#include <ctime>

#define MAX_VAL 15

int main ( void )
{
    {
        std::cout << std::endl << "============ Empty ============" << std::endl;
        Array< int > a;

        std::cout << a;
    }
    {
        std::cout << "===============================" << std::endl << std::endl;
        std::cout << "============== a ==============" << std::endl;
        Array< int > a( 10 );

        std::cout << a << std::endl;

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
    }
    {
        std::cout << "===============================" << std::endl << std::endl;
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
    {
        std::cout << "===============================" << std::endl << std::endl;
        std::cout << "============ CTest ============" << std::endl;
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand() % 100;
            numbers[i] = value;
            mirror[i] = value;
        }

        std::cout << "=========== numbers ===========" << std::endl;
        std::cout << numbers << std::endl;
        std::cout << "===============================" << std::endl;
        std::cout << "=========== mirror ============" << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            std::cout << mirror[ i ] << " ";
        }
        std::cout << std::endl;
        std::cout << "===============================" << std::endl;

        //SCOPE
        {
            std::cout << std::endl << "============ SCOPE ============" << std::endl;
            Array<int> tmp = numbers;
            std::cout << "============= tmp =============" << std::endl;
            std::cout << tmp << std::endl;
            std::cout << "===============================" << std::endl;
            Array<int> test(tmp);
            std::cout << "============= test ============" << std::endl;
            std::cout << test << std::endl;
            std::cout << "===============================" << std::endl;
        }

        std::cout << "===============================" << std::endl << std::endl;
        std::cout << "=========== NOTHING ===========" << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        std::cout << "===============================" << std::endl;
        std::cout << "=========== -2 Value ==========" << std::endl;
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "===============================" << std::endl;
        std::cout << "========== MAX Value ==========" << std::endl;
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "===============================" << std::endl;

        std::cout << "===== Change Numbers Value ====" << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand() % 200;
        }
        std::cout << numbers << std::endl;
        std::cout << "===============================" << std::endl;
        delete [] mirror;//
    }
    std::cout << "========== End CTest ==========" << std::endl << std::endl;
    return 0;
}
