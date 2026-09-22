/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:00:19 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/22 13:21:39 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Saves memory for a copy of a string, does the copy and returns the copy.
Calculate the size of the string, then do the malloc 
sending the size + 1 for the \0, 
error control and then copy de original into the dup with memcpy.
*/

void	*ft_strdup(void *str)
{
	char	*dup;
	size_t	size;

	size = ft_strlen(str);
	dup = malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, str, (size + 1));
	return (dup);
}
/*
int main(void) {
    char *dup = ft_strdup("Esta es una cadena duplicada");
    if (dup) {
        printf(dup);
        free(dup);
    }
    return (0);
}
*/