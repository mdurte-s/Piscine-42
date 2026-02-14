/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:41:38 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/05 12:01:16 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char test1[]="123";
	printf("Caso 1(%s): %d\n", test1, ft_atoi(test1));

	char test2[]="123abc";
	printf("Caso 2(%s): %d\n", test2, ft_atoi(test2));

	char test3[]="     42";
	printf("Caso 3(%s): %d\n", test3, ft_atoi(test3));

	char test4[]="abc";
	printf("Caso 4(%s): %d\n", test4, ft_atoi(test4));

	char test5[]="123abc42";
	printf("Caso 5(%s): %d\n", test5, ft_atoi(test5));

	char test6[]="abc 42";
	printf("Caso 6(%s): %d\n", test6, ft_atoi(test6));

	char test7[]="     -42";
	printf("Caso 7(%s): %d\n", test7, ft_atoi(test7));

	char test8[]="  -----42";
	printf("Caso 8(%s): %d\n", test8, ft_atoi(test8));

	char test9[]="  ++ ---42";
	printf("Caso 9(%s): %d\n ", test9, ft_atoi(test9));

	return (0);
}
*/

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	s;

	i = 0;
	n = 0;
	s = 1;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		s = s * (44 - str[i]);
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (s * n);
}
