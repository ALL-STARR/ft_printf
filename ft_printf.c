/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomvan- <thomvan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:49:53 by thomvan-          #+#    #+#             */
/*   Updated: 2023/11/17 18:36:21 by thomvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_printer(va_list arg, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, char)));
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(arg, int)));
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'p')
		return ()
}


int	ft_printf(const char *str, ...)
{
	va_list ap;
	
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strch("cspdiuxX%", str[i + 1]))
		{
			len += ft_printer(ap, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		i++;
	}
	return (len);
}