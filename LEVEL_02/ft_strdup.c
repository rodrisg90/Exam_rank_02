#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i;
    char *dst;
    int len;

    len = ft_strlen(src) + 1;
    dst = malloc(len);
    i = 0;
    if (!dst)
        return (NULL);
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

/* int	main(void)
{
	char *s1 = "HOLA";
	printf("%s\n", strdup(s1));
	printf("%s\n", ft_strdup(s1));
	return (0);
}
 */