/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:28:51 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/04 12:30:27 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[] = "12345"; 
	char	src[] = "6789";
	unsigned int	size = 20;

	printf("dest: %s\nsrc: %s\nreturn: %u\n", 
		&dest[0], &src[0], ft_strlcat(dest, src, size));

	char	dest1[] = "12345"; 
	char	src1[] = "6789";
	unsigned int	size1 = 7;

	printf("dest: %s\nsrc: %s\nreturn: %u\n", 
		&dest1[0], &src1[0], ft_strlcat(dest1, src1, size1));

	char	dest2[] = "12345"; 
	char	src2[] = "\0";
	unsigned int	size2 = 20;

	printf("dest: %s\nsrc: %s\nreturn: %u\n", 
		&dest2[0], &src2[0], ft_strlcat(dest2, src2, size2));

	char	dest3[] = "\0"; 
	char	src3[] = "6789";
	unsigned int	size3 = 20;

	printf("dest: %s\nsrc: %s\nreturn: %u\n", 
		&dest3[0], &src3[0], ft_strlcat(dest3, src3, size3));
	
	return (0);
}
*/

int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lend;
	unsigned int	lens;

	lend = len(dest);
	lens = len(src);
	if (size <= lend)
		return (size + lens);
	i = 0;
	while (src[i] != '\0' && i < size - lend -1)
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lend + lens);
}
