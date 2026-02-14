/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:28:49 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/08 16:27:27 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	create_grid(char grid[4][4]);
void	fill_grid(char grid[4][4]);
void	print_grid(char grid[4][4]);
void	error(void);
int		validate(char *argv, char *rules);

int	main(int argc, char **argv)
{
	char	grid[4][4];
	char	rules[17];

	if (argc != 2 || validate(argv[1], rules) == 0)
	{
		error();
		return (0);
	}
	create_grid(grid);
	fill_grid(grid);
	print_grid(grid);
	return (0);
}
