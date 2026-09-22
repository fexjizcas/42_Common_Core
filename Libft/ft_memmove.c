/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:33:49 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/22 09:50:30 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies memory like ft_memcpy, but it is safe for overlapping memory areas.
If destination is after source, it copies backwards.
Otherwise, it copies forwards using ft_memcpy.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	if ((char *)dest >= (char *)src)
	{
		while (n != 0)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/*
int main(void) {
    char str[] = "0123456789";
    // Solapamiento: movemos "01234" a la posición del "2"
    ft_memmove(str + 2, str, 5);
    printf(str);
    return (0);
}
*/