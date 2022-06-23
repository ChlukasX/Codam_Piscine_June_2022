/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fr_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: lnackmay <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 17:34:39 by lnackmay      #+#    #+#                 */
/*   Updated: 2022/06/09 17:34:41 by lnackmay      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int result;
	int remain;

	result = *a / *b;
	remain = *a % *b;

	*a = result;
	*b = remain;
}
