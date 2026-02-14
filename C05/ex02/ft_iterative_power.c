/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 08:48:57 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/06 13:43:11 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("Caso 1 (0 power 0):  %d\n", ft_iterative_power(0, 0));
	printf("Caso 2 (1 power 1):  %d\n", ft_iterative_power(1, 1));
	printf("Caso 3 (2 power 1):  %d\n", ft_iterative_power(2, 1));
	printf("Caso 4 (2 power 3):  %d\n", ft_iterative_power(2, 3));
	printf("Caso 7 (-2 power 3): %d\n", ft_iterative_power(-2, 3));
	return (0);
}
*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	og;

	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	i = 1;
	og = nb;
	while (i < power)
	{
		nb = nb * og;
		i++;
	}
	return (nb);
}
