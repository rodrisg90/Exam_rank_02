#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int first_c;

    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] == ' ' && argv[1][i + 1] != ' ' && argv[1][i + 1])
                first_c = i + 1;
                i++;
        }
        while(argv[1][first_c] && argv[1][first_c] != ' ')
        {
            write(1, &argv[1][first_c], 1);
            first_c++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
