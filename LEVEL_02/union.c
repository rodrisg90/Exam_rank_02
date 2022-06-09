#include <unistd.h>

int		check_same_char(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		check_same_char_2(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
    int i;

	i = 0;
	if (argc == 3)
    {
        while (argv[1][i])
        {
            if (check_same_char(argv[1], argv[1][i], i))
                write(1, &argv[1][i], 1);
            i++;
        }
        i = 0;
        while (argv[2][i])
        {
            if (check_same_char_2(argv[1], argv[2][i]))
            {
                if (check_same_char(argv[2], argv[2][i], i))
                write(1, &argv[2][i], 1);
            }
            i++;
        }
    }
	write(1, "\n", 1);
	return (0);
}
