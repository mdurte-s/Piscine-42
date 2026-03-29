/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 20:15:11 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/03/29 20:15:24 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	ft_iterative_power(int nb, int power);
int	ft_validate_dup_sign_space(char *str);
int	ft_validate_char(char c, char *base);
int	ft_convert_dec(int n, char *base, int power);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	n;
	int	p;

	if (ft_strlen(base) < 2 || ft_validate_dup_sign_space(base) == 0)
		return (0);
	i = 0;
	s = 1;
	n = 0;
	p = 0;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		s = s * (44 - str[i]);
		i++;
	}
	while (ft_validate_char(str[i], base) != -1)
		i++;
	while (ft_validate_char(str[--i], base) != -1)
		n += ft_convert_dec(ft_validate_char(str[i], base), base, p++);
	return (s * n);
}

int	ft_convert_dec(int i, char *base, int power)
{
	int	n;

	n = 0;
	if ('a' <= base[i] && base[i] <= 'z')
		n = (base[i] - 'a' + 10) * ft_iterative_power(ft_strlen(base), power);
	else if ('A' <= base[i] && base[i] <= 'Z')
		n = (base[i] - 'A' + 10) * ft_iterative_power(ft_strlen(base), power);
	else if ('0' <= base[i] && base[i] <= '9')
		n = (base[i] - '0') * ft_iterative_power(ft_strlen(base), power);
	return (n);
}

int	ft_validate_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i % ft_strlen(base));
		i++;
	}
	return (-1);
}

int	ft_validate_dup_sign_space(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
			return (0);
		j = i + 1;
		while (str[j] != '\0' && str[j] != str[i])
			j++;
		if (str[j] == str[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	og;

	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	i = 1;
	og = nb;
	while (i < power)
	{
		nb = nb * og;
		i++;
	}
	return (nb);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
