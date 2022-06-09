#include <unistd.h>

void	snake_to_camel(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '_')
        {
            str++;
            str[i] -= 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
	if (argc == 2)
    {
		snake_to_camel(argv[1]);
    }
	write(1, "\n", 1);
	return (0);
}
