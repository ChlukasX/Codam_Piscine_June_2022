#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90) //|| (str[i] >= 97 && str[i] <= 122) //makes all uppecase lowercase
			str[i] = str[i] - 32;
		else if (str[i] >= 97 && str[i] <= 122)
			i--;
		if (str[i] == 32 && str[i] == 45 && str[i] == 43)
			i++;
			str[i] = str[i] + 32;

			//if  (str[i] == ' ' || str[i] == '-' || str[i] == '+')
			//	i++;
			//	else if ((str[i] >= 65 && str[i] <= 90))
			//		str[i] = str[i] - 32;
		
		i++;
	}
	return (str);
}

int main(void)
{
	char k[] = "dansld ADSKA asdklAdkljasdASDlak";
	printf("%s", ft_strcapitalize(k));
}

//while (str[i] >= 'A' && str[i] <= 'Z')
//				str[i] = str[i] - ('A' - 'a');