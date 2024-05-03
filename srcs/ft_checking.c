/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 02:00:58 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/03 16:54:35 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_checking(va_list arg, char c)
{
	if (c == 'c')
		return (ft_putchar_f(va_arg(arg, int)));
	if (c == 's')
		return (ft_putstr_f(va_arg(arg, char * )));
	return (0);
}
