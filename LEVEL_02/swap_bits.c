/*#include <stdio.h>
*/
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

/*int	main(void)
{
	unsigned char test = 192;
	printf("Should be 12: %d\n", swap_bits(test));
}*/