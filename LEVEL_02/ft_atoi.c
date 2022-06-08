int	ft_atoi(const char *str)
{
    int i;
    int nb;
    int sign;

    i = 0;
    nb = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n')
        i++;
    if (str[i] == '-')
        sign *= -1;
    else if (str[i] == '+')
        i++;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        nb *= 10;
        nb += str[i] - '0';
        i++;
    }
    return (nb * sign);
}
