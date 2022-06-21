#include <unistd.h>

int		ft_atoi(char *str)
{
	int nb = 0;

	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - '0';
		++str;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	char c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	tab_mult(char *str)
{
	int nb;
	int i = 1;

	nb = ft_atoi(str);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(i * nb);
		write(1, "\n", 1);
		++i;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
