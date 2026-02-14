#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	test[] = "ola, tudo bem? 42palAVras quarenta-e-duas; cinquenta+e+um";
	
	printf("%s\n", ft_strcapitalize(test));
	return(0);
}
