
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "ola mundo tud bem";
	char	to_find[] = "tudo";

	ft_strstr(str, to_find);
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
