/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:31:32 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/09 17:31:37 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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