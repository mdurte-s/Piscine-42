/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:36:32 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/01 11:18:05 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[9] = {9, 8, 7, 6, 5, 4, 1, 2, 3};
	int	i;

	ft_sort_int_tab(tab, 9);
	i = 0;
	while (i < 9)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
