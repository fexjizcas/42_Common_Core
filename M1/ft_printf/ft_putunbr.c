/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:15:11 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/05 11:32:48 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putunbr(unsigned int n)
{
	int	num;

	num = 0;
	if (n > 9)
	{
		num = num + ft_putunbr(n / 10);
	}
	num = num + ft_putchar(n % 10 + '0');
	return (num);
}
