#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	    a;
	int	    b;
	char	oper;
	int	    res;

	if (argc == 4)
	{
		oper = argv[2][0];
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (oper == '+')
			res = a + b;
		else if (oper == '-')
			res = a - b;
		else if (oper == '*')
			res = a * b;
		else if (oper == '/')
			res = a / b;
		else if (oper == '%')
			res = a % b;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
