/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizzbuzz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:12:08 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/13 08:56:02 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putchar(char c);

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 4 == 0 && i % 7 == 0)
			write(1, "fizzbuzz", 9);
		else if (i % 4 == 0)
			write(1, "buzz", 5);
		else if (i % 7 == 0)
			write(1, "fizz", 5);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
