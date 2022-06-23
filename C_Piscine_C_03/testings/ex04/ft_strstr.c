
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	if (to_find[0] == '\0')
		return (str);
	return (0);
}

#include <stdio.h>

int main(void)
{
	char a[] = "hahahah sada nanana";
	char b[] = "sada";
	printf("%s", ft_strstr(a, b));
}