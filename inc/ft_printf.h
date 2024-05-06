/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:22:22 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/06 18:43:44 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include "stdarg.h"
# include "stdio.h"

int		ft_printf(const char *str, ...);
int		ft_putchar_f(char c);
int		ft_putstr_f(char *str);
size_t	ft_checking(va_list arg, char c);
int		ft_count_unsigned(unsigned int nb, char *str);

#endif