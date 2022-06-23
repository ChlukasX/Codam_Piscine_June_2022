#include <stdio.h>

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char a[] = "hello";
	int count = ft_strlen(a);
	
	printf("%d", count);
}