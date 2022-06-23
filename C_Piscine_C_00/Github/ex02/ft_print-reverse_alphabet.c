/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print-reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lnackmay <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/02 15:54:40 by lnackmay      #+#    #+#                 */
/*   Updated: 2022/06/02 19:21:01 by lnackmay      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;
	char	j;

	i = 'z';
	j = 'a';
	while (j <= i)
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
}
