/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpha_mirror.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 10:09:23 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/14 10:20:03 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_mirror(char *c, int min, int max);
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
				ft_mirror(&argv[1][i], 96, 123);
			else if (ft_is_up(argv[1][i]) == 1)
				ft_mirror(&argv[1][i], 64, 91);
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

void	ft_mirror(char *c, int min, int max)
{
	if (*c - min < max - *c)
		*c = max - (*c - min);
	else
		*c = min + (max - *c);
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
