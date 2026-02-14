/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:00:20 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/09 20:38:37 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
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
*/
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	x;
	int	*array;

	array = (int *) malloc((max - min) * sizeof(int));
	if (range == NULL)
		return -1;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	x = min;
	while (i < max - min)
	{
		array[i] = x;
		x++;
		i++;
	}
	*range = array;
	return (max - min);
}
