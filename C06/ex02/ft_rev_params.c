/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:37:10 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/05 17:37:30 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[argc - i] && argc - i > 0)
	{
		j = 0;
		while (argv[argc - i][j])
		{
			ft_putchar(argv[argc - i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
