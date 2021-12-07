/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:19:26 by asabbar           #+#    #+#             */
/*   Updated: 2021/12/05 11:20:14 by asabbar          ###   ########.fr       */
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
