#include <unistd.h>

void    ft_putchar(char c)
{
   write (1, &c, 1);
}

void    print(int a, int c, int last)
{
    ft_putchar ((a / 10) + '0');
    ft_putchar ((a % 10) + '0');
    ft_putchar (' ');
    ft_putchar ((c / 10) + '0');
    ft_putchar ((c % 10) + '0');
    if (last != 1)
    {
        ft_putchar (',');
        ft_putchar (' ');
    }
    
}

void    ft_print_comb2(void)
{
    int i;
    int j;
    int last;

    i = 0;
    while (i < 100)
    {
        j = i + 1;
        while (j < 100)
        {
            if (i == 98 && j == 99)
            {
                last = 1;
            }
            else
            {
                last = 0;
            }
            print(i, j, last);
            j++;
        }
        i++;
    }
}