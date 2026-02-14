/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:10:33 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/04 16:27:39 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "ABCE";
	unsigned int	n1 = 4;

	ft_strncmp(s1, s2, n1);
	printf("%d\n", ft_strncmp(s1, s2, n1));

	char	s3[] = "ABCD";
	char	s4[] = "ABCDd";
	unsigned int	n2 = 6;

	ft_strncmp(s3, s4, n2);
	printf("%d\n", ft_strncmp(s3, s4, n2));
	
	char	s5[] = "ABCE";
	char	s6[] = "ABCD";
	unsigned int	n3 = 4;

	ft_strncmp(s5, s6, n3);
	printf("%d\n", ft_strncmp(s5, s6, n3));
}