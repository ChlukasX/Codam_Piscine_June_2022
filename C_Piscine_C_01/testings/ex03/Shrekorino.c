#include <stdio.h>

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