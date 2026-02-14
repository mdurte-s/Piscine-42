/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_camelsnake.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:08:30 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/13 11:20:32 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_is_up(char c);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 1;
		write (1, &argv[1][0], 1);
		while (argv[1][i] != '\0')
		{
			if (ft_is_up(argv[1][i]) == 1)
			{
				argv[1][i] += 32;
				write(1, "_", 1);
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

int	ft_is_up(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
