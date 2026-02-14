/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:57:10 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/04 08:47:41 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[] = "World!";
	char	dest[13] = "Hello ";

	printf("%s", ft_strcat(dest, src));
}
*/		
int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = len(dest);
	if (len(src) > 0)
	{
		while (src[i] != '\0')
		{
			dest[size + i] = src[i];
			i++;
		}
	}
	dest[size + i] = '\0';
	return (dest);
}
