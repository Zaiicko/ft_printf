/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 02:00:58 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/03 02:17:31 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_checking(va_list arg, char c)
{
	if (c == 'c')
		return (ft_putchar_f(va_arg(arg, int)));
	return (0);
}
