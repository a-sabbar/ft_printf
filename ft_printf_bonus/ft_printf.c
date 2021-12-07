/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:26:59 by asabbar           #+#    #+#             */
/*   Updated: 2021/12/07 12:25:31 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_start(int i, int x, const char *format, va_list	ap)
{
	va_list	tmp;

	while (format[i])
	{
		if (format[i] == '%' && format[i])
		{
			i++;
			while ((format[i] == ' ' || format[i] == '#'
					|| format[i] == '+' ) && format[i])
				i++;
			if (format[i])
			{
				va_copy(tmp, ap);
				x += ft_next0(format, i, tmp);
				x += ft_next(format[i], ap);
				i++;
			}
		}
		else
			x += ft_putchar(format[i++]);
	}
	return (x);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		x;
	va_list	ap;

	i = 0;
	x = 0;
	va_start(ap, format);
	x = ft_start(i, x, format, ap);
	va_end(ap);
	return (x);
}
