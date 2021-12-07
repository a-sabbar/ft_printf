/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:17:52 by asabbar           #+#    #+#             */
/*   Updated: 2021/12/03 13:20:50 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned int n, char c)
{
	char	*base;
	int		i;

	i = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < 16)
		i += ft_putchar(base[n]);
	else
	{
		i += ft_x(n / 16, c);
		i += ft_x(n % 16, c);
	}
	return (i);
}

int	ft_x1(unsigned long n)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (n < 16)
		i += ft_putchar(base[n]);
	else
	{
		i += ft_x1(n / 16);
		i += ft_x1(n % 16);
	}
	return (i);
}

int	ft_p(unsigned long long n)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_x1(n);
	return (len);
}
