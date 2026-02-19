/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:37:16 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/19 09:31:31 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);
int		ft_strlen(char *str);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strrev(argv[1]));
	return (0);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	char	c;

	i = 0;
	n = ft_strlen(str);
	while (i < n)
	{
		c = str[i];
		str[i] = str[n - 1];
		str[n - 1] = c;
		i++;
		n--;
	}
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
