/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:54:53 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/19 12:24:55 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc == 2)
	{
		i = 1;
		n = ft_strlen(argv[1]) - 1;
		while ((argv[1][n] == ' ' || argv[1][n] == '\t')
			&& argv[1][n] != '\0')
			n--;
		while (argv[1][n - i] != ' ' && argv[1][n - i] != '\t'
			&& n - i > -1)
			i++;
		while (--i + 1 > 0)
			write(1, &argv[1][n - i], 1);
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
