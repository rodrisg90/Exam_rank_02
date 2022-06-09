/*#include <stdio.h>
*/
int		max(int* tab, unsigned int len)
{
	int i;
	int max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

/*int     main()
{
    int tab[7] = {3,9,8,2,5,7};
    printf("%d", max(tab, 6));
    return 0;
}
*/