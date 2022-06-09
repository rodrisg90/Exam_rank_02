#include <unistd.h>

void	char_match(char *str, char *find_letters)
{
	int i;
    
    i = 0;
	while (str[i])
	{
		while (*find_letters && *find_letters != str[i])
			find_letters++;
		if (*find_letters == '\0')
			return;
        else
		    i++;
		    find_letters++;
	}
	write(1, str, i);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		char_match(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}
