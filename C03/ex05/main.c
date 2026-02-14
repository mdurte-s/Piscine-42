#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[] = "12345"; 
	char	src[] = "6789";
	unsigned int	size = 1000000000;

	printf("dest: %s\nsrc: %s\nreturn: %u\n", &dest[0], &src[0], ft_strlcat(dest, src, size));

	char	dest1[] = "12345"; 
	char	src1[] = "6789";
	unsigned int	size1 = 7;

	printf("dest: %s\nsrc: %s\nreturn: %u\n", &dest1[0], &src1[0], ft_strlcat(dest1, src1, size1));

	char	dest2[] = "12345"; 
	char	src2[] = "\0";
	unsigned int	size2 = 20;

	printf("dest: %s\nsrc: %s\nreturn: %u\n", &dest2[0], &src2[0], ft_strlcat(dest2, src2, size2));

	char	dest3[] = "\0"; 
	char	src3[] = "6789";
	unsigned int	size3 = 20;

	printf("dest: %s\nsrc: %s\nreturn: %u\n", &dest3[0], &src3[0], ft_strlcat(dest3, src3, size3));
	
	return (0);
}
