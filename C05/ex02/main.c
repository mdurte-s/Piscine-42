/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 08:49:00 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/06 09:09:49 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
