/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 09:08:10 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/06 13:45:44 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("Caso 1 (0 power 0):  %d\n", ft_recursive_power(0, 0));
	printf("Caso 2 (1 power 1):  %d\n", ft_recursive_power(1, 1));
	printf("Caso 3 (2 power 1):  %d\n", ft_recursive_power(2, 1));
	printf("Caso 4 (2 power 3):  %d\n", ft_recursive_power(2, 3));
	printf("Caso 7 (-2 power 3): %d\n", ft_recursive_power(-2, 3));
	return (0);
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * (ft_recursive_power(nb, power -1)));
	else
		return (nb);
}
