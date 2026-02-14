/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:47:44 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/06 11:47:57 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("Caso 1 (0):  %d\n", ft_is_prime(0));
	printf("Caso 2 (1):  %d\n", ft_is_prime(1));
	printf("Caso 3 (2):  %d\n", ft_is_prime(2));
	printf("Caso 4 (3):  %d\n", ft_is_prime(3));
	printf("Caso 5 (4):  %d\n", ft_is_prime(4));
	printf("Caso 6 (5):  %d\n", ft_is_prime(5));
	printf("Caso 7 (7):  %d\n", ft_is_prime(7));
	printf("Caso 8 (9):  %d\n", ft_is_prime(9));
	printf("Caso 9 (13): %d\n", ft_is_prime(13));
	return (0);
}
*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
