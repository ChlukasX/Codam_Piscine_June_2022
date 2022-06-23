#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
	char k[50] = "yfg";
	char l[50] = "yfgjklahsdyfg"; 

	printf("me own %i\n\n", ft_strcmp(k, l));
	printf("strcmp %d", strcmp (k, l));
}
//		eq = "0"; //s1[i] == s2[i];
//		more = "1"; //s1[i] > s2[i];
//		less = "-1"; //s1[i] < s2[i];