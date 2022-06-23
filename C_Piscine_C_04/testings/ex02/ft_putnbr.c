
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		nb = nb + 0;
		write(1, "-2147483648", 11);
	if (nb >= 0)
		nb = nb + 0;
		write(1, , 2);
// 	if (nb >= 9)
// 		write()
}

int main(void)
{
	ft_putnbr(-2147483648);
}