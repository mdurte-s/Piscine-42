#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{	
	char *tests[] = {
		"abc",
		"ABC",
		"abcABC",
		"abc123",
		"abcghij[`aBCZ",
		"",
		"helloWorld",
		"Hello World",
		NULL};

 	int     i = 0;
	while (tests[i])
	{
		printf("ft_str_is_lowercase(\"%s\") = %d\n", tests[i], ft_str_is_lowercase(tests[i]));
		i++;
	}
	return (0);
}
