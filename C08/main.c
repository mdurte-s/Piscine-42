/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:13:04 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/02/17 15:44:34 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	//argv++;
	struct s_stock_str *par = ft_strs_to_tab(argc, argv);
	ft_show_tab(par);
	return (0);
}
