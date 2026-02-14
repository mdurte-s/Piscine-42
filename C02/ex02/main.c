/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 11:25:18 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/01 11:27:58 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*tests[] = {
		"abc",
		"ABC",
		"abcABC",
		"abc123",
		"abcghij[`aBCZ",
		"",
		"helloWorld",
		"Hello World",
		NULL};

 	int	i = 0;
	while (tests[i])
	{
		printf("ft_str_is_alpha(\"%s\") = %d\n", tests[i], ft_str_is_alpha(tests[i]));
		i++;
	}
	return (0);
}
