/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 09:44:04 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/13 09:59:50 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_low(char c);
int	ft_is_up(char c);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (ft_is_low(argv[1][i]) == 1)
				argv[1][i] = argv[1][i] - 32;
			else if (ft_is_up(argv[1][i]) == 1)
				argv[1][i] = argv[1][i] + 32;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
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
