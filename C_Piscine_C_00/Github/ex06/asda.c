#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int main (void)
{
    int a;

    a = 35;
    ft_putchar ((a / 10) + '0');
    ft_putchar ((a % 10 ) + '0');
}