
#include "libft.h"

int	main(void)
{
	printf("*||----- TESTER LIBFT -----||*\n");
	printf("\n");

	// Test ft_isalpha
	printf("--->> Testing ft_isalpha <<---\n");
	printf("-- Test not char: %d\n", ft_isalpha(41));
	printf("-- Test char value: %d\n", ft_isalpha(83));
	printf("-- Test max value: %d\n", ft_isalpha(INT_MAX));
	printf("-- Test min value: %d\n", ft_isalpha(INT_MIN));
	printf("-- Test unsigned max value: %d\n", ft_isalpha(UINT_MAX));
	printf("\n");

	// Test ft_isdigit
	printf("--->> Testing ft_isdigit <<---\n");
	printf("-- Test not digit: %d\n", ft_isdigit(41));
	printf("-- Test digit: %d\n", ft_isdigit(49));
	printf("-- Test digit: %d\n", ft_isdigit(57));
	printf("-- Test not digit: %d\n", ft_isdigit(INT_MAX));
	printf("-- Test not digit: %d\n", ft_isdigit(INT_MIN));
	printf("\n");

	// Test ft_isalnum
	printf("--->> Testing ft_isalnum <<---\n");
	printf("-- Test not digit: %d\n", ft_isalnum(5));
	printf("-- Test digit value: %d\n", ft_isalnum(65));
	printf("-- Test digit value: %d\n", ft_isalnum(48));
	printf("-- Test digit value: %d\n", ft_isalnum(INT_MAX));
	printf("\n");
	
	// Test ft_isascii
	printf("--->> Testing ft_isalnum <<---\n");
	printf("-- Test not ascii: %d\n", ft_isascii(175));
	printf("-- Test digit ascii: %d\n", ft_isascii(65));
	printf("\n");

	// Test ft_isprint	
	printf("--->> Testing ft_isprint <<---\n");
	printf("-- Test not printable: %d\n", ft_isprint(175));
	printf("-- Test digit printable: %d\n", ft_isprint(65));
	printf("\n");

	// Test ft_strlen
	printf("--->> Testing ft_isprint <<---\n");
	printf("-- Test str 'Hello': %zu\n", ft_strlen("Hello"));
	// printf("-- Test str NULL: %d\n", ft_strlen(NULL));
	printf("-- Test str 'Testings c examples': %zu\n", ft_strlen("Testings c examples"));
	printf("-- Test str void: %zu\n", ft_strlen(""));




	return (0);
}
