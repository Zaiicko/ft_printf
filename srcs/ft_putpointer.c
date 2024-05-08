/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:54:28 by zaiicko           #+#    #+#             */
/*   Updated: 2024/05/08 14:49:26 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putpointer(void *ptr, char *str)
{
	size_t	nb;
	size_t	i;
	int		base;

	if (!ptr || !str)
		return (0);
	nb = (size_t)ptr;
	base = ft_strlen(str);
	i = ft_putstr_f("0x");
	ft_putnbase(nb, str);
	if (nb == 0)
		return (i + 1);
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}
