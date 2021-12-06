/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:28:03 by asabbar           #+#    #+#             */
/*   Updated: 2021/12/03 12:16:23 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

long	ft_lennb(long long n);
int		ft_putchar(char c);
int		ft_putstr(char	*c);
int		ft_putnbr(int nb);
int		ft_uputnbr(unsigned int nb);
int		ft_x(unsigned int n, char c);
int		ft_p(unsigned long long n);
int		ft_x1(unsigned long n);
int		ft_printf(const char *format, ...);
int   ft_isprint(int c);

#endif
