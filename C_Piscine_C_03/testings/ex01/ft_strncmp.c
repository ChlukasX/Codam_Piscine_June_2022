#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] == s2[i])
			i++;
	}
	return (0);
}

int	main(void)
{
	char k[50] = "zfi";
	char l[50] = "zfg"; 

	printf("me own %i\n\n", ft_strncmp(k, l, 5));
	printf("strcmp %d", strncmp (k, l, 5));
}