/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 08:57:38 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/14 10:22:06 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat(char c, int count);
int		ft_is_low(char c);
int		ft_is_up(char c);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (ft_is_low(argv[1][i]) == 1)
				ft_repeat(argv[1][i], argv[1][i] - 96);
			else if (ft_is_up(argv[1][i]) == 1)
				ft_repeat(argv[1][i], argv[1][i] - 64);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

void	ft_repeat(char c, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		write(1, &c, 1);
		i++;
	}
}

int	ft_is_low(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_is_up(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
