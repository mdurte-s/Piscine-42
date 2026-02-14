/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 09:24:42 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/14 10:22:40 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
