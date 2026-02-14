/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:36:22 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/09 18:36:53 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	*range;

	printf("range de -10 a -5:");
	range = ft_range(-10, -5);
	i = 0;
	while (range[i])
	{
		printf(" %d", range[i]);
		i++;
	}
	return (0);	
}