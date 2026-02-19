/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:49:15 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/16 14:11:25 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strcomp(char *str1, char *str2, int x, int i);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		x;

	if (argc == 3)
	{
		j = -1;
		x = 0;
		while (++x < 3)
		{
			i = -1;
			while (argv[x][++i] != '\0')
				if (ft_strcomp(argv[1], argv[2], x, i) != 0)
					write (1, &argv[x][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_strcomp(char *str1, char *str2, int x, int i)
{
	int	j;

	j = 0;
	while (str1[j] != '\0' && x == 1)
	{
		if (str1[j] == str1[i] && j < i)
			return (0);
		j++;
	}
	j = 0;
	while (str1[j] != '\0' && x == 2)
	{
		if (str1[j] == str2[i] && str2[j] != '\0')
			return (0);
		j++;
	}
	j = 0;
	while (str2[j] != '\0' && x == 2)
	{
		if (str2[j] == str2[i] && j < i)
			return (0);
		j++;
	}
	return (-1);
}
