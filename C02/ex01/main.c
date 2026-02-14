#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[] = "Write Code";
	char	src[] = "Hello World";
	unsigned int	n;

	n = 8;
	printf("%s", ft_strncpy(dest, src, n));
	return 0;
}
