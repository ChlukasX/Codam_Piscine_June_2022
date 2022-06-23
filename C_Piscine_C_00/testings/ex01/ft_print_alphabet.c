/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: lnackmay <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/02 15:28:05 by lnackmay      #+#    #+#                 */
/*   Updated: 2022/06/02 20:56:59 by lnackmay      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;
	char	j;

	i = 'a';
	j = 'z';
	while (i <= j)
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
