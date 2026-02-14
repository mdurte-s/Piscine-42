#include <stdio.h>

int	ft_str_is_uppercase(char *str);

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
		printf("ft_str_is_uppercase(\"%s\") = %d\n", tests[i], ft_str_is_uppercase(tests[i]));
		i++;
	}
	return (0);
}
