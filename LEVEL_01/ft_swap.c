/* #include <stdio.h>
 */
void	ft_swap(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

/* int main(void)
{
    int a = 1;
    int b = 2;

    printf("%i\n%i\n", a, b);
    ft_swap(&a, &b);
    printf("%i\n%i\n", a, b);
}
 */