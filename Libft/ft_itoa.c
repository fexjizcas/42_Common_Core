/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:20:43 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/24 12:32:58 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Converts an integer number into a string of characters.
first a function to count the len of the int, 
if negatives add one in first position.
Creates the str, in last position add \0 and if negatives in 0 the simbol.
Finnaly add the numbers inversive.
*/

int	ft_count(int num)
{
	int	i;

	i = 0;
	if (num != 0)
	{
		if (num < 0)
		{
			num = num * (-1);
			i++;
		}
		while (num != 0)
		{
			num = num / 10;
			i++;
		}
	}
	else
		i = 1;
	return (i);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	num;

	num = n;
	len = ft_count(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * (-1);
	}
	else if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		len--;
		str[len] = ((num % 10) + '0');
		num = num / 10;
	}
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-234));
    return (0);
}
*/
