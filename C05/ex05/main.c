/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:47:08 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/06 11:47:14 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("Caso 1(sqrt 0):  %d\n", ft_sqrt(0));
	printf("Caso 2(sqrt 1):  %d\n", ft_sqrt(1));
	printf("Caso 3(sqrt 2):  %d\n", ft_sqrt(2));
	printf("Caso 4(sqrt 4):  %d\n", ft_sqrt(3));
	printf("Caso 5(sqrt 36): %d\n", ft_sqrt(36));
	printf("Caso 6(sqrt -2): %d\n", ft_sqrt(-2));
	return (0);
}