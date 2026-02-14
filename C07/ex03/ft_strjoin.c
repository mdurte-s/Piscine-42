/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 10:03:23 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/10 20:20:25 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_strcat(char *dest, char *src);
int		ft_len(char *str);

/*
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs1[1]; char	*sep1 = ", ";
	strs1[0] = "123";
    printf("%s\n", ft_strjoin(1, strs1, sep1));

    char	*strs2[2]; char	*sep2 = ", ";
	strs2[0] = "123"; strs2[1] = "456";
	printf("%s\n", ft_strjoin(2, strs2, sep2));

    char	*strs3[0]; char	*sep3 = ", ";
	printf("%s\n", ft_strjoin(0, strs3, sep3));

    char	*strs4[3]; char	*sep4 = ", ";
	strs4[0] = "123"; strs4[1] = "456"; strs4[2] = "789";
    printf("%s\n", ft_strjoin(3, strs4, sep4));

	return (0);
}
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat;
	int		i;
	int		c;

	i = -1;
	c = 0;
	while (++i < size)
		c = c + ft_len(strs[i]);
	if (size <= 0)
		cat = (char *)malloc(1);
	else
		cat = (char *)malloc((c + (size - 1) * ft_len(sep) + 1) * sizeof(char));
	if (!cat)
			return (0);
	cat[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(cat, strs[i]);
		if (i != size -1)
			ft_strcat(cat, sep);
	}
	return (cat);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_len(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
