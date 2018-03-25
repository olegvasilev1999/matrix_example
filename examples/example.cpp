#include <iostream>

#include "matrix.hpp"

int main()
{
	matrix_t<int> a, b;
	if( char op; a.read( std::cin ) && std::cin >> op && b.read( std::cin ) ) {
		if( op == '+' ) {
			( a + b ).write( std::cout );
		}
	}
    
    return 0;
}
