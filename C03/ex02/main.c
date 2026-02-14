#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[] = "World!";
	char	dest[13] = "Hello ";

	printf("%s", ft_strcat(dest, src));
}
