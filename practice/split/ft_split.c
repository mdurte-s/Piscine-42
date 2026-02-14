/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:23:31 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/14 13:41:08 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str);
int		count_words(char *str);
int		ft_validate(char c);

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = -1;
	while (++i < count_words(argv[1]))
		printf("string (%d): %s\n", i, ft_split(argv[1])[i]);
	return (0);
}

char	**ft_split(char *str)
{
	char	**array;
	int		i;
	int		j;
	int		k;
	int		c;

	i = 0;
	c = -1;
	array = (char **)malloc((count_words(str) + 1) * sizeof(char *));
	while (++c < count_words(str))
	{
		j = 1;
		while (ft_validate(str[i]) == 1 && str[i])
			i++;
		while (ft_validate(str[i + j]) == 0 && str[i + j])
			j++;
		k = -1;
		array[c] = (char *)malloc((j + 1) * sizeof(char));
		while (++k < j)
			array[c][k] = str[i + k];
		array[c][k] = '\0';
		i = i + j;
	}
	array[c] = NULL;
	return (array);
}

int	count_words(char *str)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (ft_validate(str[i]) == 0 && str[i])
		{
			c++;
			j = 1;
			while (ft_validate(str[i + j]) == 0 && str[i + j])
				j++;
		}
		i = i + j;
	}
	return (c);
}

int	ft_validate(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}
