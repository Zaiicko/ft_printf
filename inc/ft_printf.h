#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include "stdarg.h"
# include "stdio.h"

int		ft_printf(const char *, ...);
int		ft_putchar_f(char c);
size_t	ft_checking(va_list arg, char c);

#endif