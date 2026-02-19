/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:05:25 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/17 15:58:12 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	char				*cop;
	struct s_stock_str	*array;

	array = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (0);
	i = 0;
	while (i < ac)
	{
		cop = (char *)malloc((ft_strlen(av[i]) + 1) * sizeof(char));
		if (!cop)
			return (0);
		ft_strcpy(cop, av[i]);
		array[i].copy = cop;
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		i++;
	}
	array[i].str = 0;
	return (array);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
