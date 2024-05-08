/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 03:40:19 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/08 01:40:51 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			i += ft_checking(&arg, *str);
		}
		else
			i += ft_putchar_f(*str);
		str++;
	}
	va_end(arg);
	return (i);
}
