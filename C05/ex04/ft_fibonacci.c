/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:35:43 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/08 18:02:10 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("index -1: %d\n", ft_fibonacci(-1));
	printf("index 0:   %d\n", ft_fibonacci(0));
	printf("index 1:   %d\n", ft_fibonacci(1));
	printf("index 2:   %d\n", ft_fibonacci(2));
	printf("index 3:   %d\n", ft_fibonacci(3));
	printf("index 4:   %d\n", ft_fibonacci(4));
	printf("index 5:   %d\n", ft_fibonacci(5));
	printf("index 6:   %d\n", ft_fibonacci(6));
	return (0);
}
*/
int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
