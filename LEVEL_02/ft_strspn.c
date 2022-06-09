/*#include <stdio.h>
#include <string.h>
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
    
    i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}
  
/*int main () {
   int len = strspn("geeks for geeks","geek");
   printf("Length of initial segment matching : %d\n", len );    
   int len2 = ft_strspn("geeks for geeks","geek");
   printf("Length of initial segment matching : %d\n", len2 ); 
   return(0);
}
*/