/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:24:17 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/05 11:25:55 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conver(char const str, va_list args)
{
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (str == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (str == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (str == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 'x'));
	else if (str == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 'X'));
	else if (str == '%')
		return (ft_putchar('%'));
	return (0);
}
