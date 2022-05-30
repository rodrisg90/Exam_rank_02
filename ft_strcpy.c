/* #include <stdio.h>
 */
char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    if (!s1 || !s2)
        return (NULL);
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

/* int main(void)
{
	char s1[] = "Q ";
	char s2[] = "pasa";

	printf("%s\n", s1);
	ft_strcpy(s1, s2);
	printf("%s\n", s1);
	return (0);
}
 */