#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{	
	char *tests[] = {
			"1234567890",
			"1.2",
			"1,2",
			"abc123",
			"123[`4560",
			"",
			"12 34",
			NULL};
   
	int	i = 0;
	while (tests[i])
	{
		printf("ft_str_is_numeric(\"%s\") = %d\n", tests[i], ft_str_is_numeric(tests[i]));
		i++;
	}
	return (0);
}
