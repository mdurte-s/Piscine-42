/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:10:17 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/04 19:53:45 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "ABCE";
	unsigned int	n1 = 3;

	ft_strncmp(s1, s2, n1);
	printf("%d\n", ft_strncmp(s1, s2, n1));

	char	s3[] = "ABCD";
	char	s4[] = "ABCD";
	unsigned int	n2 = 3;

	ft_strncmp(s3, s4, n2);
	printf("%d\n", ft_strncmp(s3, s4, n2));
	
	char	s5[] = "ABCE";
	char	s6[] = "ABCD";
	unsigned int	n3 = 3;

	ft_strncmp(s5, s6, n3);
	printf("%d\n", ft_strncmp(s5, s6, n3));
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
