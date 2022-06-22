#include <stdlib.h>
/*#include <stdio.h>*/

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t counter;
    size_t i;

    counter = 0;
    i = 0;
    while (src[counter])
        counter++;
    if (dstsize != 0)
    {
        while (src[i] && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (counter);
}

int     ft_len(int nbr)
{
    int nbr_len;

    nbr_len = 0;
    if (nbr == 0)
        nbr_len++;
    if (nbr < 0)
    {
        nbr *= -1;
        nbr_len++;
    }
    while (nbr > 0)
    {
        nbr /= 10;
        nbr_len++;
    }
    return (nbr_len);
}

char    *ft_charconv(char *dest, int nbr, int nbr_len)
{
    if (nbr == 0)
        *dest = '0';
    if (nbr < 0)
    {
        *dest = '-';
        nbr *= -1;
    }
    while (nbr > 0)
    {
        *(dest + nbr_len--) = '0' + (nbr % 10);
        nbr /= 10;
    }
    return (dest);
}

char	*ft_itoa(int nbr)
{
    char    *dest;
    int     nbr_len;

    if (nbr == -2147483648)
    {
        dest = (char *)malloc(sizeof(char) * 12);
        if (!dest)
            return (NULL);
        ft_strlcpy(dest, "-2147483648", 12);
        return (dest);
    }
    nbr_len = ft_len(nbr);
    dest = (char *)malloc(sizeof(char) * nbr_len + 1);
    if (!dest)
        return (NULL);
    *(dest + nbr_len--) = '\0';
    dest = ft_charconv(dest, nbr, nbr_len);
    return (dest);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(123156));
	return (0);
}
*/