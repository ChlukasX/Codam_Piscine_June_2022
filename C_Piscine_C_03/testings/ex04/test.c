#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
int	ft_strlen(char to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j] && i < (ft_strlen + 1))
		{
			j++;
			i++;
			if (to_find[j] == to_find[ft_strlen])
				str[i] = str[i] - ft_strlen;
		}
		i++;
	}
	if (str != to_find)
		return (0);
	return (str);
}

int	ft_strlen(char to_find)
{
	int	count;

	count = 0;
	while (to_find[count] != '\0')
		count++;
	return (count);
}

int main(void)
{
	char a[50] = "hellohoware ypi dping";
	char b[50] = "klj";
	ft_strlen();
	char *c;
	printf("%s\n", ft_strstr(a, b));
	c = strstr (a, b);
	printf("%s", c);
}