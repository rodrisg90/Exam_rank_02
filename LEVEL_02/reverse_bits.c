/*#include <stdio.h>
*/
unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char result;

	i = 8;
	result = 0;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (result);
}

/*int     main()
{
	printf("%d", reverse_bits(38));
	return (0);
}
*/