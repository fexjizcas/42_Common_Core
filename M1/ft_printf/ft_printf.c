/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:55:43 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/06 10:22:21 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		check;

	va_start(args, str);
	i = 0;
	check = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			check = check + ft_conver(str[i + 1], args);
			i++;
		}
		else
			check = check + ft_putchar(str[i]);
		if (check == -1)
			return (va_end(args), -1);
		i++;
	}
	va_end(args);
	return (check);
}
