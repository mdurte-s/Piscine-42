/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:15:28 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/10 15:36:55 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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