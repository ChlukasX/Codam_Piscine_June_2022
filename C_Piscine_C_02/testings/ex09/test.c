#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
    int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] - ('Z' - 'z');
		i++;
	}
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] != 32 || str[i] != 45 || str[i] != 43)
            i++;
        if (str[i] >= 'a' && str[i] <= 'z')
		        str[i] = str[i] - ('a' - 'A');
    }
    return (str);
}

int main(void)
{
	char k[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(k));
}