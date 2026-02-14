/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:34:17 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/09 18:46:44 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	*range;

	printf("range de 1 a 9:");
	range = ft_range(1, 9);
	i = 0;
	while (range[i])
	{
		printf(" %d", range[i]);
		i++;
	}
	return (0);	
}
*/

int	*ft_range(int min, int max)
{
	int	i;
	int	x;
	int	*range;

	range = (int *)malloc((max - min) * sizeof(int));
	if (min >= max)
		return NULL;
	i = 0;
	x = min;
	while (i < max - min)
	{
		range[i] = x;
		x++;
		i++;
	}
	return (range);
}
