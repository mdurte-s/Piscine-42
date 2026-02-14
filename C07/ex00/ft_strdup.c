/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:47:23 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/09 17:31:50 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *src);

int	main(void)
{
	char	*src = "this is a copy";
	char	*new;

	new = ft_strdup(src);
	printf("The new string is: %s\n", new);
	return (0);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char	*src)
{
	int		lsrc;
	int		i;
	char	*new;

	lsrc = ft_strlen(src);
	new = (char *)malloc((lsrc + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < lsrc)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
