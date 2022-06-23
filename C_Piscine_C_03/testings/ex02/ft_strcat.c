#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
    dest[i + j] = '\0';
	return (dest);
}

int main(void)
{
	char i[50] = "biio+";
	char k[50] = "lsd";
	printf("%s", ft_strcat(i, k));
}