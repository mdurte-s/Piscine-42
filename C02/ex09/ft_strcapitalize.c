/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:07:13 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/01 15:46:10 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	up(char c)
{
	if (65 <= c && c <= 90)
		return (1);
	return (0);
}

int	low(char c)
{
	if (97 <= c && c <= 122)
		return (1);
	return (0);
}

int	n(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	cap(char c, char a)
{
	if (up(c) == 1)
	{
		if (up(a) == 1 || low(a) == 1 || n(a) == 1)
			c = c + 32;
	}
	if (low(c) == 1)
	{
		if (up(a) == 0 && low(a) == 0 && n(a) == 0)
			c = c - 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (low(str[0]) == 1)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		str[i] = cap(str[i], str[i - 1]);
		i++;
	}
	return (str);
}
