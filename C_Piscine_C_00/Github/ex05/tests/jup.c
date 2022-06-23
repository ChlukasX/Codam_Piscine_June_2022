#include <unistd.h>

void	ft_print_comb(void)
{
    char i;
    char j;
    char k;
    char m;

    i = '0';
    j = '1';
    k = '2';
    m = k + '1';

    while ((i != '8') && (j != '9'))
    {
        write (1, &i, 1);
        write (1, &j, 1);
        write (1, &k, 1);
        write (1, ", ", 2);
        if (k >= 2)
        {   
            k++;
            if (j >= '1' && k == '9') 
            {
                k = '2';
                j++;
                k++;
                if ((i >= '0') && (k == '9') && (j == '8'))
                {
                    k = '2';
                    j = '1';
                    i++;
                    j++;
                    k++;
                }
                
            }
            
        }
    }

}