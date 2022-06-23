
#include <unistd.h>

char	g_i;
char	g_j;
char	g_k;

void    ftprint_comb2(void)
{
    char ft_print_combR;
    char ft_print_combL;

    ft_print_combR = 'p';
    ft_print_combL = 'l';
    while ('p' != )
    {
        write (1, &ft_print_combL &ft_print_combR, 2);
    }
    
}

void    ft_print_combR(void)
{
	g_i = '0';
	g_j = g_i + 1;
	while (g_i <= '9')
	{
		while (g_j <= '9')
		{
            write (1, &g_i, 1);
			write (1, &g_j, 1);
			if (g_i != '9')
			{
				write (1, ", ", 2);
			}
			g_j++;
        }
		g_i++;
		g_j = g_i + 1;
	}
}

void    ft_print_combL(void)
{
	g_i = '0';
	g_j = g_i + 1;
	while (g_i <= '9')
	{
		while (g_j <= '9')
		{
            write (1, &g_i, 1);
			write (1, &g_j, 1);
			if (g_i != '9')
			{
				write (1, " ", 2);
			}
			g_j++;
        }
		g_i++;
		g_j = g_i + 1;
	}
}
