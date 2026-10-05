/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:14:42 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/05 11:30:30 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr(unsigned long nb)
{
	int	i;

	i = 0;
	if (!nb)
		return (write(1, "(nil)", 5));
	i = i + ft_putstr("0x");
	i = i + ft_puthex(nb, 'x');
	return (i);
}
