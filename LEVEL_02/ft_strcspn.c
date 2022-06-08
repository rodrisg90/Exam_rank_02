/*#include <stddef.h>
#include <stdio.h>
#include <string.h>
*/
size_t	ft_strcspn(const char *s, const char *reject)
{
    int     i;
    int     i2;

    i = 0;
    i2 = 0;
    while (s[i])
    {
        i2 = 0;
        while (reject[i2])
        {
            if(s[i] == reject[i2])
                return (i);
            i2++;
        }
        i++;
    }
    i = 0;
    while (s[i])
        i++;
    return (i);
}

/*int main () {
   int len;
   const char str1[] = "ABCDEF4960910";
   const char str2[] = "013";

   len = strcspn(str1, str2);
   printf("First matched character is at %d\n", len + 1);
   len = ft_strcspn(str1, str2);
   printf("First matched character is at %d\n", len + 1);
   
   return(0);
}
*/