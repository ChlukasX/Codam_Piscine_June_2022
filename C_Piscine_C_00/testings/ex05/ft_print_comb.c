/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lnackmay <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/02 21:00:50 by lnackmay      #+#    #+#                 */
/*   Updated: 2022/06/05 21:01:06 by lnackmay      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	g_i;
char	g_j;
char	g_k;

void	ft_print_comb(void)
{
	g_i = '0';
	g_j = g_i + 1;
	g_k = g_j + 1;
	while (g_i <= '9')
	{
		while (g_j <= '9')
		{
			while (g_k <= '9')
			{
				write (1, &g_i, 1);
				write (1, &g_j, 1);
				write (1, &g_k, 1);
				if (g_i != '7')
				{
					write (1, ", ", 2);
				}
				g_k++;
			}
			g_j++;
			g_k = g_j + 1;
		}
		g_i++;
		g_j = g_i + 1;
		g_k = g_j + 1;
	}
}
