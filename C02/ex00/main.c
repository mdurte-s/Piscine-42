#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[10];
	int		i;
	char	*res;

	i = 0;
	src = "Hello";
	while (i <= 9)
	{
		dest[i] = "aseasease"[i];
		i++;
	}
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	ft_strcpy(dest, src);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	return (0);
}
