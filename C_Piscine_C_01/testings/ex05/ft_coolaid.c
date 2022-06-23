/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lnackmay <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 19:30:14 by lnackmay      #+#    #+#                 */
/*   Updated: 2022/06/09 19:30:16 by lnackmay      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int a = 0;
	sizeof(str);
	while (str[a] != '/n')
	{
		a++;
	}
	
	write(1, str, 1);
}

int main()
{
	ft_putstr("bithi bitch bitching");
}