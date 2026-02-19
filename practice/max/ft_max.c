/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:10:44 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/19 16:39:04 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len);

int	main(void)
{
	int array[] = {1, 5, 8, 44, 8};

	printf("%d\n", max(array, sizeof(array) / sizeof(int)));
	return (0);
}

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	unsigned int	max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
