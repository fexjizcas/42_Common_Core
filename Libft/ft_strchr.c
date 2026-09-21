/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:17:18 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/21 16:58:33 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)a)
			return ((char *)&str[i]);
		i++;
	}
	if (a == '\0')
	{
		return ((char *)&str[i]);
	}
	return (0);
}
