/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:34:27 by asabbar           #+#    #+#             */
/*   Updated: 2021/12/07 12:34:30 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	x1;
	int	x2;

	x1 = ft_printf("% +d\n", -10);
	x2 = printf("% +d\n", -10);
	printf("\n-------\n");
	printf("%d\n", x1);
	printf("%d\n", x2);
}
