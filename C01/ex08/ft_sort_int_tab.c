/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:03:38 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/01 11:21:23 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 1;
	while (i < size)
	{
		if (tab[i - 1] > tab[i])
		{
			x = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = x;
			i = 0;
		}
		i++;
	}
}
