#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int	n);

int	main(void)
{
	char	src[] = "World!";
	char	dest[13] = "Hello ";
	unsigned int	n;

	n = 5;
	printf("%s", ft_strncat(dest, src, n));
}
