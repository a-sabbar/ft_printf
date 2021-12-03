/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:38:23 by asabbar           #+#    #+#             */
/*   Updated: 2021/12/03 13:18:27 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_lennb(long long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char	*c)
{
	int		i;
	int		len;

	i = 0;
	if (!c)
	{
		len = ft_putstr("(null)");
		return (len);
	}
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}	
	else if (nb < 10)
	{
		ft_putchar((char)(nb + '0'));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((char)(nb % 10 + '0'));
	}
	return (ft_lennb(nb));
}

int	ft_uputnbr(unsigned int nb)
{
	if (nb < 10)
	{
		ft_putchar((char)(nb + '0'));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((char)(nb % 10 + '0'));
	}
	return (ft_lennb(nb));
}
