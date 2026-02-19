/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:45:12 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/15 18:41:08 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);
int		ft_modulo(int n);
int		ft_intlen(int n);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("int: %d\n", ft_atoi(argv[1]));
	printf("char: %s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		x;

	i = ft_intlen(n);
	x = 0;
	if (n < 0)
		x = 1;
	n = ft_modulo(n);
	str = (char *)malloc((i + 1 + x) * sizeof(char));
	str[0] = '-';
	str[i + x] = '\0';
	while (--i + x >= x)
	{
		str[i + x] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}

int	ft_intlen(int n)
{
	int	i;

	i = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_modulo(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
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
