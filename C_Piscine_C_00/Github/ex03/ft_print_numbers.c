/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: lnackmay <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/02 19:06:15 by lnackmay      #+#    #+#                 */
/*   Updated: 2022/06/02 19:11:57 by lnackmay      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;
	int	j;

	i = '0';
	j = '9';
	while (i <= j)
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
