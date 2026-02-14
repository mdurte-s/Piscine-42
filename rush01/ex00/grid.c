/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:28:52 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/08 13:52:40 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	create_grid(char grid[4][4])
{
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			grid[r][c] = '0';
			c++;
		}
		r++;
	}
}

void	print_grid(char grid[4][4])
{
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			write(1, &grid[r][c], 1);
			if (c < 3)
				write(1, " ", 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}
