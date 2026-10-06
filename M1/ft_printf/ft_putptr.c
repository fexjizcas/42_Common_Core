/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:14:42 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/06 10:18:41 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int				i;
	unsigned long	nb;

	i = 0;
	nb = (unsigned long)ptr;
	if (!nb)
		return (write(1, "(nil)", 5));
	i = i + ft_putstr("0x");
	i = i + ft_puthex(nb, 'x');
	return (i);
}
