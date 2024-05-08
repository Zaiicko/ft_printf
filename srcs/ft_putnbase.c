/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 02:14:17 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/08 02:15:03 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_putnbrbase(unsigned int nb, char *str)
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