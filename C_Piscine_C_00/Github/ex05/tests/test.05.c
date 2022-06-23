#include <unistd.h>

void	ft_print_comb(void)
{
    char i;
    char j;
    char k;

    i = '0';
    j = i + 1;
    k = j + 1;
    
    while (i <= '7')
    {
        while (j <= '8' && k )
        {
            while (k <= '9')
            {
                write (1, &i, 1);
                write (1, &j, 1);
                write (1, &k, 1);
                write (1, ", ", 2);
                k++;
                /*if (k == '9')
                {
                    k = j + 1;     
                }*/
            }
            /*write (1, "\n", 1);*/
            j++;
            
        }
        i++;
    }
}