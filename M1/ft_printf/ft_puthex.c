/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:14:00 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/05 11:28:27 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthex(unsigned long nb, const char c)
{
	int		i;
	char	*hex;

	i = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	else
		return (0);
	if (nb < 16)
		return (ft_putchar(hex[nb]));
	else
	{
		i = ft_puthex((nb / 16), c);
		return (i + ft_puthex((nb % 16), c));
	}
	return (i);
}
