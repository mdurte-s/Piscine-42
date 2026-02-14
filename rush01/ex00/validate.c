/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:03:57 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/08 13:55:08 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate(char *argv, char *rules)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (('1' <= argv[i] && argv[i] <= '4') && (argv[i + 1] == ' '))
	{
		rules[c] = argv[i];
		i = i + 2;
		c++;
	}
	if ('1' <= argv[i] && argv[i] <= '4' && argv[i + 1] == '\0'
		&& c + 1 == 16)
	{
		rules[c] = argv[i];
		rules[c + 1] = '\0';
		return (1);
	}
	return (0);
}
