#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	i;
	int	counter=1;
	int	*range2 = &counter;
	int	**range = &range2;

	ft_ultimate_range(range, -10, -5);
	printf("range de -10 a -5 (%d):", ft_ultimate_range(range, -10, -5));
	i = 0;
	while (range2[i])
	{
		printf(" %d", range2[i]);
		i++;
	}
	return (0);	
}