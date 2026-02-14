/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:10:17 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/02 17:10:25 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "ABCE";

	ft_strcmp(s1, s2);
	printf("%d\n", ft_strcmp(s1, s2));

	char	s3[] = "ABCD";
	char	s4[] = "ABCD";

	ft_strcmp(s3, s4);
	printf("%d\n", ft_strcmp(s3, s4));
	
	char	s5[] = "ABCE";
	char	s6[] = "ABCD";

	ft_strcmp(s5, s6);
	printf("%d\n", ft_strcmp(s5, s6));
}
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
