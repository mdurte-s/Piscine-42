/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 20:15:15 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/03/29 20:15:26 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("input  > %s\n", argv[1]);
	printf("base   > %s\n", argv[2]);
	printf("return > %d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
