/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:53:29 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/06 19:26:47 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void	ft_putnbrbase(unsigned int nb, char *str)
{
	unsigned int	base;

	base = ft_strlen(str);
	if (nb >= base)
	{
		ft_putnbrbase(nb / base, str);
		ft_putnbrbase(nb % base, str);
	}
	if (nb < base)
		ft_putchar_f(str[nb]);
}

int	ft_count_unsigned(unsigned int nb, char *str)
{
	int	i;
	int	base;

	if (!str)
		return (0);
	if (nb == 0)
		return (1);
	i = 0;
	base = ft_strlen(str);
	ft_putnbrbase(nb, str);
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}
