#include <stdlib.h>
/*#include <stdio.h>*/
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (begin_list == 0)
		return;
	while (begin_list != 0)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
}

/*void	print_data(void *data)
{
	printf("%s\n", data);
}

int	main(void)
{
	t_list *test_list = malloc(sizeof(t_list));
	test_list -> data = "qué pasa";
	test_list -> next = malloc(sizeof(t_list));
	test_list -> next -> data = "gente";
	test_list -> next -> next = malloc(sizeof(t_list));
	test_list -> next -> next -> data = "peña";
	test_list -> next -> next -> next = NULL;

	ft_list_foreach(test_list, print_data);
	return (0);
}*/