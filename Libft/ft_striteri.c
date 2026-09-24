/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:17:02 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/24 15:17:51 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	wrapper_tou(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int	main(void)
{
	char	str[] = "hola mundo";

	printf("%s\n", str);
	ft_striteri(str, wrapper_tou);
	printf("%s\n", str);
 	return (0);
}
*/
