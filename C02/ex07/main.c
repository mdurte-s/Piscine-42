#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	test[] = "ola mundo";

	printf("ft_strupcase(\"%s\") = %s\n", test, ft_strupcase(test));
	return (0);
}
