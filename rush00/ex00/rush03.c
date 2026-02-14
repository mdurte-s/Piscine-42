/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:12:26 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/01 10:11:49 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rush 03
void	ft_putchar(char c);

void	first_last_line3(int x)
{
	int	xx;

	xx = 2;
	ft_putchar('A');
	while (xx <= x)
	{
		while (xx < x)
		{
			ft_putchar('B');
			xx++;
		}
		if (xx == x && x != 1)
		{
			ft_putchar('C');
		}
		xx++;
	}
	ft_putchar('\n');
}

void	middle_line3(int x)
{
	int	xx;

	xx = 2;
	ft_putchar('B');
	while (xx <= x)
	{
		while (xx < x)
		{
			ft_putchar(' ');
			xx++;
		}
		if (xx == x && x != 1)
		{
			ft_putchar('B');
		}
		xx++;
	}
	ft_putchar('\n');
}

void	rush03(int x, int y)
{
	int	yy;

	if (0 <= x && 0 <= y)
	{
		yy = 1;
		while (yy < y + 1)
		{
			if (yy == 1 || yy == y)
				first_last_line3(x);
			else
				middle_line3(x);
			yy++;
		}
	}
}
