/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:55:43 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/01 11:15:26 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		check;

	va_start(args, str);
	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == "%" && str[i + 1] != '\0')
			check = ft_conver(str[i++], args);
		else
			check = ft_putchar(str[i]);
		if (check == -1)
		{
			va_end(args);
			return (-1);
		}
		i++;
	}
	va_end(args);
	return (check);
}
