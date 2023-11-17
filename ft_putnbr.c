/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomvan- <thomvan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:39:56 by thomvan-          #+#    #+#             */
/*   Updated: 2023/11/17 18:33:21 by thomvan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

int	ft_putnbr(int n)
{
	long	num;

	num = (long) n;
	if (num < 0)
	{
		num *= -1;
		ft_putchar_fd('-');
	}
	if (num > 9)
		ft_putnbr_fd((int)(num / 10));
	ft_putchar_fd(num % 10 + '0');
	return (ft_counter(n));
}
