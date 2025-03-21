/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 02:14:17 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/09 03:19:55 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_putnbase(size_t nb, char *str)
{
	size_t	base;

	if (!str)
		return ;
	base = ft_strlen(str);
	if (nb >= base)
	{
		ft_putnbase(nb / base, str);
		ft_putnbase(nb % base, str);
	}
	if (nb < base)
		ft_putchar_f(str[nb]);
}
