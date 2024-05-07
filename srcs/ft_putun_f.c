/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:53:29 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/07 03:23:24 by zaiicko          ###   ########.fr       */
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

int	ft_putun_f(unsigned int nb, char *str)
{
	size_t	i;
	int		base;

	if (!str)
		return (0);
	i = 0;
	base = ft_strlen(str);
	ft_putnbrbase(nb, str);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}
