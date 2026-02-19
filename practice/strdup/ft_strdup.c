/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:07:56 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/19 11:48:09 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s\n", ft_strdup(argv[1]));
	return (0);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*array;

	i = 0;
	array = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!array)
		return (0);
	while (i < ft_strlen(src))
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
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
