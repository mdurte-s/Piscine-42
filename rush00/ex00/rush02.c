/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:58:27 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/01 10:11:33 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rush 02
void	ft_putchar(char c);

void	first_line2(int x)
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
			ft_putchar('A');
		}
		xx++;
	}
	ft_putchar('\n');
}

void	last_line2(int x)
{
	int	xx;

	xx = 2;
	ft_putchar('C');
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

void	middle_line2(int x)
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

void	rush02(int x, int y)
{
	int	yy;

	if (0 <= x && 0 <= y)
	{
		yy = 1;
		while (yy < y + 1)
		{
			if (yy == 1)
				first_line2(x);
			else if (yy == y)
				last_line2(x);
			else
				middle_line2(x);
			yy++;
		}
	}
}
