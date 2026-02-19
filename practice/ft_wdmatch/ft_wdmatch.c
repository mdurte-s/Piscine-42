/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:41:38 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/19 17:42:11 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strstr(char c, char *str, int i);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[1][i] != '\0')
		{
			j = ft_strstr(argv[1][i], argv[2], j);
			if (j == 0)
				break ;
			i++;
		}
		if (j != 0)
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_strstr(char c, char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i + 1);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
