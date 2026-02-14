/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prime_sum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:26:34 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/14 10:20:57 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_prime(int n);
int		ft_atoi(char *str);
void	ft_putnbr(int n);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	if (argc == 2 && ft_atoi(argv[1]) >= 0)
	{
		while (i <= ft_atoi(argv[1]))
		{
			if (ft_is_prime(i) == 1)
				sum += i;
			i++;
		}
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}

int	ft_is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	s;

	i = 0;
	n = 0;
	s = 1;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		s = s * (44 - str[i]);
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (n * s);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
