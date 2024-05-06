/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 02:00:58 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/06 19:26:20 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_checking(va_list arg, char c)
{
	if (c == 'c')
		return (ft_putchar_f(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr_f(va_arg(arg, char *)));
	else if (c == '%')
		return (ft_putchar_f('%'));
	else if (c == 'u')
		return (ft_count_unsigned(va_arg(arg, unsigned int), "0123456789"));
	else if (c == 'x')
		return (ft_count_unsigned(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_count_unsigned(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	return (0);
}
