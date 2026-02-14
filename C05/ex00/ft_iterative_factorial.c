/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:54:01 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/06 08:56:16 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("factorial de 0:  %d\n", ft_iterative_factorial(0));
	printf("factorial de 1:  %d\n", ft_iterative_factorial(1));
	printf("factorial de 2:  %d\n", ft_iterative_factorial(2));
	printf("factorial de 3:  %d\n", ft_iterative_factorial(3));
	printf("factorial de 4:  %d\n", ft_iterative_factorial(4));
	printf("factorial de 5:  %d\n", ft_iterative_factorial(5));
	printf("factorial de 6:  %d\n", ft_iterative_factorial(6));
	printf("factorial de 7:  %d\n", ft_iterative_factorial(7));
	printf("factorial de 12: %d\n", ft_iterative_factorial(12));
	printf("factorial de 13: %d\n", ft_iterative_factorial(13));
	printf("factorial de -1: %d\n", ft_iterative_factorial(-1));
	return (0);
}
*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (f);
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
