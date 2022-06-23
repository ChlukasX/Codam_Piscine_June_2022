
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

#include <stdio.h>

int main(void)
{
	char k[30] = "12345678a";
	int i = ft_strlen(k);
	printf("%d", i);
}