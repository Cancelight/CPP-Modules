#include "Fixed.hpp"
#include <typeinfo>
int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed d( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed e( Fixed( 5.05f ) - Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << ( a < b ) << std::endl;
	std::cout << ( ++c > --e ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;


	return 0;
}
