/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:57:10 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/04 19:54:37 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int	n);

int	main(void)
{
	char	src[] = "World!";
	char	dest[13] = "Hello ";
	unsigned int	n;

	n = 5;
	printf("%s", ft_strncat(dest, src, n));
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	i;

	i = 0;
	size = len(dest);
	while (src[i] != '\0' && (i < nb))
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
