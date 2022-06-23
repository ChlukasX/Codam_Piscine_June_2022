#include <unistd.h>



void ft_putchar(char c)
{
	write (1, &c, 1);
}

void print(int a, int b, int l)
{
	ft_putchar (a);
	ft_putchar (' ');
	ft_putchar (b);
	if (l == 98)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
	
}

void	ft_print_comb2(void)
{
	int	g_i;
	int	g_j;
	int l;

	l = g_i;
	g_i = 0;
	while (g_i < 99)
	{
		g_j = g_i + 1;
		while (g_j < 100)
		{
			print (g_i, g_j, l);
		}
		if (g_i  != 98)
		{
			print (g_i, g_j, l);
			g_j++;
		}
		g_i++;
	}
	
}

