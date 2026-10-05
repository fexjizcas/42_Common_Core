/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:33:08 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/05 13:33:32 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_conver(char const str, va_list args);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_puthex(unsigned long nb, const char c);
int	ft_putptr(unsigned long nb);

#endif
