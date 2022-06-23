/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lnackmay <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 16:09:34 by lnackmay      #+#    #+#                 */
/*   Updated: 2022/06/09 16:09:38 by lnackmay      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 15;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
	return(0);
}
