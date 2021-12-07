/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonus_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:17:44 by asabbar           #+#    #+#             */
/*   Updated: 2021/12/07 12:19:29 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xbonus(const char *c, int i, int x)
{
	if (c[i] == 'x')
	{
		while (c[i] != '%')
		{
			if (c[i] == '#')
			{
				x += ft_putstr("0x");
				return (x);
			}
			i--;
		}
	}
	else if (c[i] == 'X')
	{
		while (c[i] != '%')
		{
			if (c[i] == '#')
			{
				x += ft_putstr("0X");
				return (x);
			}
			i--;
		}
	}
	return (0);
}

int	ft_next0(const char *c, int i, va_list	tmp)
{
	int	x;
	int	p;

	x = 0;
	p = va_arg(tmp, int);
	if (c[i] == 'd' || c[i] == 'i')
	{
		while (c[i] != '%')
		{
			if (c[i] == ' ' && p >= 0)
				x = 1;
			if (c[i] == '+' && p >= 0)
				return (ft_putchar('+'));
			i--;
		}
		if (x == 1)
			return (ft_putchar(' '));
		return (x);
	}
	else if ((c[i] == 'x' || c[i] == 'X') && p)
		return (ft_xbonus(c, i, x));
	return (0);
}

int	ft_next(char c, va_list	ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_p(va_arg(ap, unsigned long long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_uputnbr(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_x(va_arg(ap, unsigned int), c));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (ft_isprint(c))
		return (ft_putchar(c));
	return (0);
}
