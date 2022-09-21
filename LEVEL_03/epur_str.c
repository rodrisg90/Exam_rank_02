#include <unistd.h>

int checker(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] != ' ' || argv[1][i] != '\t')
            {
                write(1, &argv[1][i], 1);
                if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t')
                {
                    if (checker(&argv[1][i + 1]) == 1)
                    write(1, " ", 1);
                }
                i++;
            }
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        }
    }
    write(1, "\n", 1);
}
