/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:31:13 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/01/31 20:03:28 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	li;

	li = nb;
	if (li < 0)
	{
		li = li * -1;
		ft_putchar('-');
	}
	if (10 <= li)
	{
		ft_putnbr(li / 10);
	}
	ft_putchar(li % 10 + '0');
}
