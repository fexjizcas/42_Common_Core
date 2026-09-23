/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:30:55 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/23 13:04:48 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Delete the characters indicated from the front 
and end unitl found another character.
Firts goes throught s1 from the start until strchr find something diferent 
of set, then the same but from the end.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (s1[end] && ft_strchr(set, s1[end]))
	{
		end--;
	}
	res = ft_substr(s1, start, end);
	return (res);
}
/*
int	main(void)
{
	char	*str;

	str = "  A  B  ";
	printf("%s\n", ft_strtrim(str, " "));
	return (0);
}
*/
