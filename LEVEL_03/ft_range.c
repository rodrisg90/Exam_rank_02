#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int start, int end)
{
	int	size;
	int	*ret;
	int	*ptr;

	size = end - start;
	if (size)
	{
		ptr = (int *)malloc(sizeof(int) * size);
		if (ptr)
		{
			ret = ptr;
			while (start <= end)
			{
				*ptr = start;
				ptr++;
				start++;
			}
			return (ret);
		}
	}
	return (NULL);
}

/*
int main()
{
	int	*lst;
	int	*head;

	lst = ft_range(3, 16);
	head = lst;
	while (*lst)
	{
		printf("%i\n", *lst);
		lst++;	
	}
	free(head);
	return (0);
}
*/