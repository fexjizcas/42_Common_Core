/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:58:11 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/22 12:59:47 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Similar to malloc, saves memory for a given size and sets it to zero.
First do it with malloc, then error control, 
and finnaly calls bzero to set to zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
/*
int main(void) {
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr) {
        printf(arr[0]);
        printf(arr[4]);
        free(arr);
    }
    return (0);
}
*/