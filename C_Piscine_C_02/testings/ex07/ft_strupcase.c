#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return str;
}

int main(void)
{
	char k[] = "hello boi 123";
	printf("%s", ft_strupcase(k));
}