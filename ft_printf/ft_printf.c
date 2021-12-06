/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:26:59 by asabbar           #+#    #+#             */
/*   Updated: 2021/12/03 11:02:38 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_printf(const char *format, ...)
{
	int		i;
	int		x;
	va_list	ap;

	i = 0;
	x = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i])
		{
			i++;
			while (format[i] == ' ' && format[i])
				i++;
			if (format[i])
			{
				x += ft_next(format[i], ap);
				i++;
			}
		}
		else
			x += ft_putchar(format[i++]);
	}
	va_end(ap);
	return (x);
}
