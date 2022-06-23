#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
        dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	
	return (dest);
}

int main(void)
{
    unsigned int n;
    char src[] = "Hello";
    char dest[] = "jk";

    n = 3;
    printf("%s", ft_strncpy(dest, src, n));
}