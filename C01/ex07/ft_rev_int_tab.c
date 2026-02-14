/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:20:15 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/01 11:23:04 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	x;

	i = 0;
	n = size - 1;
	while (i < n)
	{
		x = tab[i];
		tab[i] = tab[n];
		tab[n] = x;
		i++;
		n--;
	}
}
