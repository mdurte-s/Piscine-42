/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:29:38 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/17 10:01:10 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcomp(char *str, int i);
int	ft_strstr(char *str, char c);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (ft_strcomp(argv[1], i) == 0
				&& ft_strstr(argv[2], argv[1][i]) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_strcomp(char *str, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (str[j] == str[i])
			return (1);
		j++;
	}
	return (0);
}

int	ft_strstr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
