/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:14:21 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/05 11:29:25 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count = count + ft_putchar('-');
		n = n * -1;
	}
	if (n >= 0 && n < 10)
		count = count + ft_putchar((n + '0'));
	else
	{
		count = count + ft_putnbr((n / 10));
		count = count + ft_putnbr((n % 10));
	}
	return (count);
}
