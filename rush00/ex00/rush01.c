/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:58:27 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/01 10:11:03 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rush 01
void	ft_putchar(char c);

void	first_line1(int x)
{
	int	xx;

	xx = 2;
	ft_putchar('/');
	while (xx <= x)
	{
		while (xx < x)
		{
			ft_putchar('*');
			xx++;
		}
		if (xx == x && x != 1)
			ft_putchar('\\');
		xx++;
	}
	ft_putchar('\n');
}

void	last_line1(int x)
{
	int	xx;

	xx = 2;
	ft_putchar('\\');
	while (xx <= x)
	{
		while (xx < x)
		{
			ft_putchar('*');
			xx++;
		}
		if (xx == x && x != 1)
			ft_putchar('/');
		xx++;
	}
	ft_putchar('\n');
}

void	middle_line1(int x)
{
	int	xx;

	xx = 2;
	ft_putchar('*');
	while (xx <= x)
	{
		while (xx < x)
		{
			ft_putchar(' ');
			xx++;
		}
		if (xx == x && x != 1)
			ft_putchar('*');
		xx++;
	}
	ft_putchar('\n');
}

void	rush01(int x, int y)
{
	int	yy;

	if (0 <= x && 0 <= y)
	{
		yy = 1;
		while (yy < y + 1)
		{
			if (yy == 1)
				first_line1(x);
			else if (yy == y)
				last_line1(x);
			else
				middle_line1(x);
			yy++;
		}
	}
}
