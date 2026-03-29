/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 20:14:54 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/03/29 20:15:22 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_validate_dup_sign(char *str);

/*
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int		nbr;
	char	base[] = "poneyvif";

	//nbr = -2147483648;
	nbr = 123;
	ft_putnbr_base(nbr, base);
	return (0);
}
*/

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	nb = nbr;
	if (ft_strlen(base) > 1 && ft_validate_dup_sign(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb >= ft_strlen(base))
			ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}

int	ft_validate_dup_sign(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j] != str[i] && str[j] != '\0')
			j++;
		if (str[j] == str[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
