#include <unistd.h>

void	ft_print_comb(void)
{
    char i;
    char j;
    char k;

    i = '0';
    j = i + 1;
    k = j + 1;
    
    while (i <= '9')
    {
        while (j <= '9')
        {
            while (k <= '9')
            {
                write (1, &i, 1);
                write (1, &j, 1);
                write (1, &k, 1);
                if (i != '7')
                {
                    write (1, ", ", 2);
                }
                k++;
            }
            j++;
            k = j + 1;
        }
        i++;
        j = i + 1;
        k = j + 1;
    }
}