/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:06:41 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/05 19:08:20 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("factorial de 0:  %d\n", ft_recursive_factorial(0));
	printf("factorial de 1:  %d\n", ft_recursive_factorial(1));
	printf("factorial de 2:  %d\n", ft_recursive_factorial(2));
	printf("factorial de 3:  %d\n", ft_recursive_factorial(3));
	printf("factorial de 4:  %d\n", ft_recursive_factorial(4));
	printf("factorial de 5:  %d\n", ft_recursive_factorial(5));
	printf("factorial de 6:  %d\n", ft_recursive_factorial(6));
	printf("factorial de 12: %d\n", ft_recursive_factorial(12));
	printf("factorial de 13: %d\n", ft_recursive_factorial(13));
	printf("factorial de -1: %d\n", ft_recursive_factorial(-1));
	return (0);
}
