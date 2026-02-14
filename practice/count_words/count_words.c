/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:42:10 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/14 11:52:59 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//counts words separated by spaces, new lines and tabs.

int	count_words(char *str);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("number of words: %d\n", count_words(argv[1]));
	return (0);
}

int	count_words(char *str)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' '
			&& str[i] != '\n'
			&& str[i] != '\t'
			&& str[i] != '\0')
		{
			c++;
			j = 1;
			while (str[i + j] != ' '
				&& str[i + j] != '\n'
				&& str[i + j] != '\t'
				&& str[i + j] != '\0')
				j++;
		}
		i = i + j;
	}
	return (c);
}
